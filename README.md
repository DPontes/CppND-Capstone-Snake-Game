# CPPND: Capstone Snake Game

This project is cloned from the Capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213). The code for this repo was inspired by [this](https://codereview.stackexchange.com/questions/212296/snake-game-in-c-with-sdl) excellent StackOverflow post and set of responses.

This project was chosen due to the lack of time to complete it given the developer's situation.

   * [CPPND: Capstone Snake Game](#cppnd-capstone-snake-game)
      * [1. Dependencies for Running Locally](#1-dependencies-for-running-locally)
      * [2. Basic Build Instructions](#2-basic-build-instructions)
      * [3. Enhancements to the game](#3-enhancements-to-the-game)
         * [3.1. Added a Border around the Perimeter](#31-added-a-border-around-the-perimeter)
      * [4. Project Requirements (Rubric)](#4-project-requirements-rubric)
         * [4.1. README](#41-readme)
            * [4.1.1. A README with instructions is included in the project](#411-a-readme-with-instructions-is-included-in-the-project)
            * [4.1.2. The README includes information about each rubric point addressed](#412-the-readme-includes-information-about-each-rubric-point-addressed)
            * [4.1.3. The README indicates which project was chosen](#413-the-readme-indicates-which-project-was-chosen)
         * [4.2. Loops, Functions and I/O](#42-loops-functions-and-io)
            * [4.2.1. The project demonstrates an understanding of C++ functions and control structures](#421-the-project-demonstrates-an-understanding-of-c-functions-and-control-structures)
            * [4.2.2. The project reads data from a file or writes data to a file](#422-the-project-reads-data-from-a-file-or-writes-data-to-a-file)
            * [4.2.3. The project accepts user input and processes the input](#423-the-project-accepts-user-input-and-processes-the-input)
         * [4.3. Object Oriented Programming](#43-object-oriented-programming)
            * [4.3.1. The project used Object Oriented Programming techniques](#431-the-project-used-object-oriented-programming-techniques)
            * [4.3.2. Classes use appropriate access specifiers for class members](#432-classes-use-appropriate-access-specifiers-for-class-members)
            * [4.3.3. Class constructors utilize member initialization lists](#433-class-constructors-utilize-member-initialization-lists)
            * [4.3.4. Classes abstract implementation details from their interfaces](#434-classes-abstract-implementation-details-from-their-interfaces)
            * [4.3.5. Classes encapsulate behaviour](#435-classes-encapsulate-behaviour)
            * [4.3.6. Classes follow an appropriate inheritance hierarchy](#436-classes-follow-an-appropriate-inheritance-hierarchy)
            * [4.3.7. Overloaded functions allow the same function to operate on different parameters](#437-overloaded-functions-allow-the-same-function-to-operate-on-different-parameters)
            * [4.3.8. Derived class functions override virtual base class functions](#438-derived-class-functions-override-virtual-base-class-functions)
            * [4.3.9. Template generalize functions in the project](#439-template-generalize-functions-in-the-project)
         * [4.4. Memory Management](#44-memory-management)
            * [4.4.1. The project makes use of references in function declarations](#441-the-project-makes-use-of-references-in-function-declarations)
            * [4.4.2. The project uses destructors appropriately](#442-the-project-uses-destructors-appropriately)
            * [4.4.3. The project uses <a href="https://en.cppreference.com/w/cpp/language/raii" rel="nofollow">Resource Aquisition Is Initialization (RAII)</a> where appropriate](#443-the-project-uses-resource-aquisition-is-initialization-raii-where-appropriate)
            * [4.4.4. The project follows the <a href="https://en.cppreference.com/w/cpp/language/rule_of_three" rel="nofollow">Rule Of 5</a>](#444-the-project-follows-the-rule-of-5)
            * [4.4.5. The project uses move semantics to move, instead of copying, data (where possible)](#445-the-project-uses-move-semantics-to-move-instead-of-copying-data-where-possible)
            * [4.4.6. The project uses smart pointers instead of raw pointers](#446-the-project-uses-smart-pointers-instead-of-raw-pointers)
         * [4.5. Concurrency](#45-concurrency)
            * [4.5.1. The project uses multithreading](#451-the-project-uses-multithreading)
            * [4.5.2. A promise and future are used in the project](#452-a-promise-and-future-are-used-in-the-project)
            * [4.5.3. A mutex or lock is used in the project](#453-a-mutex-or-lock-is-used-in-the-project)
            * [4.5.4. A condition variable is used](#454-a-condition-variable-is-used)

## 1. Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## 2. Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.

## 3. Enhancements to the game

### 3.1. Added a Border around the Perimeter

An infinite world is rather boring, so a border around the perimeter was added as a new `Border` class. It is rendered as a green line, and if the snake goes *into* the border, the game finishes. The initial solution can be seen in the [PR #32](https://github.com/DPontes/CppND-Capstone-Snake-Game/pull/32), although this PR contained a couple of errors later fixed in the [PR #36](https://github.com/DPontes/CppND-Capstone-Snake-Game/pull/36).

Currently the algorithm consists of two `for-loops` that go through the top and bottom edges, and the side edges, respectively. There might be a better algorithm to do this, but this solution will do for now.

## 4. Project Requirements (Rubric)

The rubric for this project has been translated into Automated Github Issues which can be followed in the [Project Kanban Board](https://github.com/DPontes/CppND-Capstone-Snake-Game/projects/1)

### 4.1. README

#### 4.1.1. A README with instructions is included in the project :heavy_check_mark:

  - This information can be found above in this README file

#### 4.1.2. The README includes information about each rubric point addressed :heavy_check_mark:

  - Well, you're looking at it :)

#### 4.1.3. The README indicates which project was chosen :heavy_check_mark:

  - Again, this information can be found above in this file

### 4.2. Loops, Functions and I/O

#### 4.2.1. The project demonstrates an understanding of C++ functions and control structures

#### 4.2.2. The project reads data from a file or writes data to a file

#### 4.2.3. The project accepts user input and processes the input :heavy_check_mark:

  - The base code from Udacity's repository already includes the acceptance of user input to move the snake in the game.

### 4.3. Object Oriented Programming

#### 4.3.1. The project used Object Oriented Programming techniques :heavy_check_mark:

  - The base code from Udacity's repository is already organized into classes, with attributes and methods.

#### 4.3.2. Classes use appropriate access specifiers for class members :heavy_check_mark:

  - The base code from Udacity's repository already has the correct access specifiers in the existing classes; moreover, the new `Border` class in the `border.h` file also has the correct access specifiers

#### 4.3.3. Class constructors utilize member initialization lists

#### 4.3.4. Classes abstract implementation details from their interfaces :heavy_check_mark:

  - The base code from Udacity's repository already describes their effect through their names; moreover, the new `Border` class and it's members describe their effect through the name of the member functions.

#### 4.3.5. Classes encapsulate behaviour

#### 4.3.6. Classes follow an appropriate inheritance hierarchy

#### 4.3.7. Overloaded functions allow the same function to operate on different parameters

#### 4.3.8. Derived class functions override virtual base class functions

#### 4.3.9. Template generalize functions in the project

### 4.4. Memory Management

#### 4.4.1. The project makes use of references in function declarations

#### 4.4.2. The project uses destructors appropriately :heavy_check_mark:

  - In [PR #41](https://github.com/DPontes/CppND-Capstone-Snake-Game/pull/41) it was added the proper destructors to every class in the program.

#### 4.4.3. The project uses [Resource Aquisition Is Initialization (RAII)](https://en.cppreference.com/w/cpp/language/raii) where appropriate

#### 4.4.4. The project follows the [Rule Of 5](https://en.cppreference.com/w/cpp/language/rule_of_three) :heavy_check_mark:

  - In [PR #45](https://github.com/DPontes/CppND-Capstone-Snake-Game/pull/45) the Rule-of-3 (instead of the Rule-of-5) was introduced for the `Border` class. The reason behind using the Rule-of-3 instead of the *Rule-of-5* was for the sake of simplicity.

#### 4.4.5. The project uses `move` semantics to move, instead of copying, data (where possible)

#### 4.4.6. The project uses smart pointers instead of raw pointers :heavy_check_mark:

  - In [PR #45](https://github.com/DPontes/CppND-Capstone-Snake-Game/pull/45) it was introduced a smart pointer of the `borderLine` vector that is used inside the `Snake::UpdateBody` function

### 4.5. Concurrency

#### 4.5.1. The project uses multithreading

#### 4.5.2. A promise and future are used in the project

#### 4.5.3. A mutex or lock is used in the project

#### 4.5.4. A condition variable is used
