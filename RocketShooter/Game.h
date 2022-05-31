#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>
#include <unordered_map>
#include "TextureManager.h"
#include "Rocket.h"
#include "Button.h"
#include "Time.h"
#include "EnemyManager.h"
#include "BulletManagers.h"
using std::vector;
using std::cout;
using std::unordered_map;


class Game
{
	sf::Sprite background;
	const float HEIGHT = 675;
	const float WIDTH = 1200;

	Rocket rocket;
	RocketBulletManager friendlyBullets;
	unordered_map<string, Button> buttons;

	Enemy currentEnemy;


	bool gameOver;
	bool hasStarted;
	bool hasInteracted;
	bool hasEnemy;

public:

	Game();

	//main functions
	void Initialize();
	void Update();
	void Reset();
	void Draw(sf::RenderWindow& window);

	//Mutators
	void PressSpaceKey();
	void CheckButtonClicksAt(sf::Vector2f mousePos);
	void SetToInteracted();

	//Accessors
	bool GameOver();
	bool HasStarted();
	bool HasInteracted();
	

private:
	void SetBackground();
	void InitializeRocket();
	void InitializeButtons();

	void ControlRocket();
	void CheckIfRocketKilled();


	void UpdateEnemy();

	void DrawHomeScreen(sf::RenderWindow& window);
	void DrawGameOverScreen(sf::RenderWindow& window);
	void DrawGamePlay(sf::RenderWindow& window);
};

