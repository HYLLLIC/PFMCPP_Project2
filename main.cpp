#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 int           //integer
 float         //floating point
 bool          //boolean
 double        //double precision floating point
 char          //character
 unsigned int  //unsigned integer
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    remember:
    Name functions what they do
        takeDogForWalk(int distanceInYards);
    Name variables what they are.
        int numStepsSinceStart;

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'

    int x = 1;
    int y = 2;
    int z = 3;

    float snickers = 2.19f;
    float bottleWater = 1.99f;
    float gatorade = 2.87f;

    bool isSweaty = true;
    bool lightsOn = false;
    bool amTired = true;

    double favoriteNumbers = 3.737373737373;
    double scoreCard = 9.99;
    double upDown = 12345.54321;

    char dimension = 'X';
    char lastLetter = 'Z';
    char kanisSays = 'A';

    unsigned int hells = 9;
    unsigned int streetLights = 4;
    unsigned int banjo = 5;
    
    ignoreUnused(number, x, y, z, snickers, bottleWater, gatorade, isSweaty, lightsOn, amTired, favoriteNumbers, scoreCard, upDown, dimension, lastLetter, kanisSays, hells, streetLights, banjo); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
float throwHammer(double hammerWeight, double power)
{
    ignoreUnused(hammerWeight, power);
    return {};
}

/*
 2)
 */
bool isStuck(bool canMove = false, bool canSee = false, bool canHear = false)
{
    ignoreUnused(canMove, canSee, canHear);
    return {};
}

/*
 3)
 */
int yourChange(double cost, double paid, int dollars = 0, int quarters = 0, int dimes = 0)
{
    ignoreUnused(cost, paid, dollars, quarters, dimes);
    return {};
}

/*
 4)
 */
float explode(double temp, double pressure, bool fracture = false)
{
    ignoreUnused(temp, pressure, fracture);
    return {};
}

/*
 5)
 */
char letterGrade(int totalPoints, int possiblePoints, bool wasLate = false)
{
    ignoreUnused(totalPoints, possiblePoints, wasLate);
    return {};
}

/*
 6)
 */
unsigned int elevatorLight(int floor, bool doorsClosed, char inspectorGrade)
{
    ignoreUnused(floor, doorsClosed, inspectorGrade);
    return {};
}

/*
 7)
 */
unsigned int liftWeights(int weight, int reps, bool wearHeadphones = false)
{
    ignoreUnused(weight, reps, wearHeadphones);
    return {};
}

/*
 8)
 */
double getAudited(bool isSame, double income, double deductions, float taxRate = 10.0f)
{
    ignoreUnused(isSame, income, deductions, taxRate);
    return {};
}

/*
 9)
 */
int spinWheel(bool coinInserted = false, char buttonSelect = 'a', double pullLever = 2.2)
{
    ignoreUnused(coinInserted, buttonSelect, pullLever);
    return {};
}

/*
 10)
 */
float laughter(unsigned int funny, unsigned int numDrinks)
{
    ignoreUnused(funny, numDrinks);
    return {};
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto hammerThrowDist = throwHammer(4.5, 1.2);
    
    //2)
    auto checkOne = isStuck(true, true, true);
    
    //3)
    auto change = yourChange(2.50, 4.00, 1, 0, 0);
    
    //4)
    auto blownUp = explode(200.0, 5.0, true);
    
    //5)
    auto myGrade = letterGrade(93, 100, false);
    
    //6)
    auto buttonPushed = elevatorLight(6, true, 'A');
    
    //7)
    auto workout = liftWeights(100, 10, true);
    
    //8)
    auto filingStatus = getAudited(true, 20000.0, 5000.0, 20.0f);
    
    //9)
    auto spinOne = spinWheel(true, 'b', 4.4);
    
    //10)
    auto loudness = laughter(2, 3);
    
    ignoreUnused(carRented, hammerThrowDist, checkOne, change, blownUp, myGrade, buttonPushed, workout, filingStatus, spinOne, loudness);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
