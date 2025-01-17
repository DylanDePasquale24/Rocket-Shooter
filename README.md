# Rocket Shooter
## Description
Rocket Shooter is a game where players navigate through asteroid fields, fighting enemies to stay alive and complete all 5 waves. Once wave 5 is reached, enemies become increasingly more powerful the longer you stay alive, so survive as long as you can!

## Game Mechanics

### Enemies
There are 3 types of enemies: Rogue Aliens, UFO's, and Battleships. Rogue Aliens are the weakest, but also the fastest and often the most tedious to kill. In wave 1 they only require 1 shot to destroy, but their health increases as you progress through the waves. Battleship's on the other hand are slower, but have significantly more health and fire power. UFO's are the even middle ground between the two. Each enemy has their own strengths and weaknesses, and all become stronger as the waves progress.

### Asteroid Fields
While fighting enemies, you will have to evade a series of asteroid fields that get progressively more difficult. Like enemies, they are divided into 3 levels: small, medium, and large asteroids. Asteroid fields are sparse in the beginning, but become very dense by the time you reach wave 5. One small mistake could cost you the game!

### Objective and Controls
The objective of the game is to beat your record score by travelling as far as you can and killing enemies along the way. Your points will increase rapidly every second to log distance, and depending on the type of enemy you destroy, you can gain between 500-11,000 points. The controls are pretty simple, just use the keyboard arrows and the space bar to shoot. 



## Running the Application
### Installing Prerequisites
This project requires SFML as this is how the graphics are integrated with C++. For more information and documentation on SFML (Simple and Fast Multimedia Library) you can check out their website here: https://www.sfml-dev.org/.

If you would simply like to install SFML, you can follow the following steps:
1. Download SFML version 2.6.2 (Visual C++ 16, 64 bit) from the SFML website: [https://www.sfml-dev.org/download.php](https://www.sfml-dev.org/download/sfml/2.6.2/)
2. Extract the zip file to your desired location (I will be using D:/SFML-2.6.2)


### Cloning the repository
1. To clone the repository onto your local machine, you can use the following command in your terminal: 
    ```console
    git clone https://github.com/DylanDePasquale24/Rocket-Shooter.git
    ```

### Building the Executable
 1. Navigate to the project directory and use the g++ compiler to build an executable. Make sure to insert the path where you extracted the SFML zip file in Prerequisites. I am using D:/SFML-2.6.2 for this example.
    ```console
    cd Rocket-Shooter/RocketShooter
    set PATH=D:/SFML-2.6.2/bin;%PATH%
    g++ -I D:/SFML-2.6.2/include -L D:/SFML-2.6.2/lib -o Rocket-Shooter_Program *.cpp -lsfml-graphics -lsfml-window -lsfml-system
    ```

### Running and Playing the Game
1. Run the executable and the game window will appear: 
    ```console
      Rocket-Shooter_Program.exe
    ```
2. From there you can begin playing the game!

