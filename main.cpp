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
int - Integers
bool - Booleans
char - Characters
float - Floating Point
double - Double Floating Point
wchar_t - Wide Character
 
 
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
    // Integers
    int number = 324;
    int numberTwo = 2;
    int i = 0;
    // Booleans
    bool doIUnderstandCPPNow = false;
    bool willIUnderstandCPPLater = true;
    bool willIMakeCoolJUCEPlugins = true;
    // Characters
    char firstInitial = 'j';
    char middleInitial = 't';
    char lastInitial = 'n';
    // Floating Point
    float floatingNumber = 0.5f;
    float secondFloatingNumber = 3.14f;
    float lastNumber = 6.66f;
    // Double Floating Point
    double longNumber = 30.245238479823;
    double diggityDouble = 66.666666666666;
    double doubleMcDoubleson = 12.34568789;

    ignoreUnused(number, numberTwo, i, doIUnderstandCPPNow, willIUnderstandCPPLater, willIMakeCoolJUCEPlugins, firstInitial, middleInitial, lastInitial, floatingNumber, secondFloatingNumber, lastNumber, longNumber, diggityDouble, doubleMcDoubleson);
    
}

/*
 1)
 */
int calculateAge(int yearIWasBorn)
{
    ignoreUnused(yearIWasBorn);
    return {};
}

/*
 2)
 */
bool amIHungry(float hoursSinceILastAte, int foodIAte)
{
    ignoreUnused(hoursSinceILastAte, foodIAte);
    return {};
}

/*
 3)
 */
float calculateRevolutionsPerMin(float speedOfCarInMPH = 60.0f, int typeOfCar = 0)
{
    ignoreUnused(speedOfCarInMPH, typeOfCar);
    return {};
}

/*
 4)
 */
void paintRoom(int roomToBePainted, int colorToPaint)
{
    ignoreUnused(roomToBePainted, colorToPaint);
}

/*
 5)
 */
void makeACoolJUCEPlugin(bool hasGoodIdea, bool hasTheRightSkill)
{
    ignoreUnused(hasGoodIdea, hasTheRightSkill);
}

/*
 6)
 */
float calculateNetWeeklyProfit(float weeklyIncome = 1000.0f, float weeklyExpenses = 500.0f)
{
    ignoreUnused(weeklyIncome, weeklyExpenses);
    return {};
}

/*
 7)
 */
void findNewJob(bool hasResume, int numberOfSkills, int previousJobs)
{
    ignoreUnused(hasResume, numberOfSkills, previousJobs);
}

/*
 8)
 */
int generateSong(char keyOfSong, float songTempo, int styleOfMusic, float songLength)
{
    ignoreUnused(keyOfSong, songTempo, styleOfMusic, songLength);
    return {};
}

/*
 9)
 */
char generateRandomLetter(int seed = 0)
{
    ignoreUnused(seed);
    return {};
}

/*
 10)
 */
int buyTrainTickets(int numberOfPeople, int destination, float amountOfMoneyYouHave)
{
    ignoreUnused(numberOfPeople, destination, amountOfMoneyYouHave);
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
    // auto carRented = rentACar(6, 2); 
    
    //1)
    auto myAge = calculateAge(1989);
    
    //2)
    auto hunger = amIHungry(5.0, 4);
    
    //3)
    auto rpm = calculateRevolutionsPerMin();
    
    //4)
    paintRoom(3, 4);
    
    //5)
    makeACoolJUCEPlugin(true, false);
    
    //6)
    auto netWeeklyProfit = calculateNetWeeklyProfit(99999);
    
    //7)
    findNewJob(true, 4, 2);
    
    //8)
    auto newSongIdea = generateSong('a', 120.0f, 4, 210.0f);
    
    //9)
    auto newRandomLetter = generateRandomLetter(123);
    
    //10)
    auto numOfTicketsBought = buyTrainTickets(2, 5, 10.0f);
    
    
    ignoreUnused(myAge, hunger, rpm, netWeeklyProfit, newSongIdea, newRandomLetter, numOfTicketsBought);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
