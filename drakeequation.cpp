#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // ProgramGreeting
    cout << "Hello, welcome to my program! " << endl;
    cout << "This program will calculate the Drake equation." << endl;
    cout << "The goal of the Drake equation is to calculate the number of potential alien civilizations out there." << endl;

    // Specification C2 - Variable Initialization 
    // Specification C1 - Variable Declaration 
    const float starCreationRate = 7;               //I used floats so I wouldn't have to convert later when I calculate the number of potential alien civilizations         
    const float percentStarsWithPlanets = 0.4f;              
    float averageNumberOfPlanetSupportLife = 0.23f;         
    const float percentThatGoToDevelopLife = 0.13f;          
    float percentThatGoToIntelligentLife = 0.01f;            
    float percentWillingAndAbleToCommunicate = 0.81f;        
    float expectedLT = 10000;                                
    float potentialAliens = 0;                               

    // Specification B1 - Calculation
    potentialAliens = starCreationRate * percentStarsWithPlanets * averageNumberOfPlanetSupportLife * percentThatGoToDevelopLife * percentThatGoToIntelligentLife * percentWillingAndAbleToCommunicate * expectedLT;

    // Specification B2 - Drake Equation Heading
    cout << "\n";
    cout << "CHANCE OF INTELLIGENT LIFE" << endl;
    cout << "==========================" << endl;
    cout << fixed << setprecision(3) << potentialAliens << endl;

    // Specification B3 - Double and Half Output and Headings
    cout << "\n";
    cout << "SENSITIVITY ANALYSIS" << endl;
    cout << "====================" << endl;
    cout << "Double the chance of other civilizations: " << potentialAliens * 2 << endl;
    cout << "Half the chance of other civilizations: " << potentialAliens / 2 << endl;

    // Specification A1 - Variable Table
    cout << "\nVARIABLE NAMES AND VALUES" << endl;
    cout << "=======================================================" << endl;
    cout << left;
    cout << "| " << setw(30) << "Drake equation variables" << "| " << setw(20) << "variable values" << "|" << endl;
    cout << "| " << setw(30) << "-----------------------------" << "| " << setw(20) << "--------------------" << "|" << endl;
    cout << "| " << setw(30) << "starCreationRate" << "| " << setw(20) << starCreationRate << "|" << endl;
    cout << "| " << setw(30) << "percentStarsWithPlanets" << "| " << setw(20) << percentStarsWithPlanets << "|" << endl;
    cout << "| " << setw(30) << "averageNumberOfPlanetSupportLife" << "| " << setw(20) << averageNumberOfPlanetSupportLife << "|" << endl;
    cout << "| " << setw(30) << "percentThatGoToDevelopLife" << "| " << setw(20) << percentThatGoToDevelopLife << "|" << endl;
    cout << "| " << setw(30) << "percentThatGoToIntelligentLife" << "| " << setw(20) << percentThatGoToIntelligentLife << "|" << endl;
    cout << "| " << setw(30) << "percentWillingAndAbleToCommunicate" << "| " << setw(20) << percentWillingAndAbleToCommunicate << "|" << endl;
    cout << "| " << setw(30) << "expectedLT" << "| " << setw(20) << expectedLT << "|" << endl;
    cout << "| " << setw(30) << "potentialAliens" << "| " << setw(20) << potentialAliens << "|" << endl;
    cout << "| " << setw(30) << "-----------------------------" << "| " << setw(20) << "--------------------" << "|" << endl;

    // Specification A2 - Output Table
    cout << "\nDRAKE EQUATION VALUE" << endl;
    cout << "=======================================================" << endl;
    cout << left;
    cout << "| " << setw(30) << "Estimated Civilizations" << "| " << setw(20) << potentialAliens << "|" << endl;
    cout << "| " << setw(30) << "-----------------------------" << "| " << setw(20) << "--------------------" << "|" << endl;

    // Specification A3 - Sensitivity Analysis Table
    cout << "\nSENSITIVITY ANALYSIS TABLE" << endl;
    cout << "=======================================================" << endl;
    cout << left;
    cout << "| " << setw(30) << "2x Estimated Civs" << "| " << setw(20) << potentialAliens * 2 << "|" << endl;
    cout << "| " << setw(30) << "1/2 Estimated Civs" << "| " << setw(20) << potentialAliens / 2 << "|" << endl;
    cout << "| " << setw(30) << "-----------------------------" << "| " << setw(20) << "--------------------" << "|" << endl;

    return 0;
}

/* 
Hello, welcome to my program! 
This program will calculate the Drake equation.
The goal of the Drake equation is to calculate the number of potential alien civilizations out there.

CHANCE OF INTELLIGENT LIFE
==========================
6.781

SENSITIVITY ANALYSIS
====================
Double the chance of other civilizations: 13.563
Half the chance of other civilizations: 3.391

VARIABLE NAMES AND VALUES
=======================================================
| Drake equation variables      | variable values     |
| ----------------------------- | --------------------|
| Star Creation Rate            | 7.000               |
| Percent Stars With Planets    | 0.400               |
| Avg. Number of Planets        | 0.230               |
| Percent Develop Life          | 0.130               |
| Percent Intelligent Life      | 0.010               |
| Percent Communicate           | 0.810               |
| Expected Lifetime             | 10000.000           |
| Potential Aliens              | 6.781               |
| ----------------------------- | --------------------|

DRAKE EQUATION VALUE
=======================================================
| Estimated Civilizations       | 6.781               |
| ----------------------------- | --------------------|

SENSITIVITY ANALYSIS TABLE
=======================================================
| 2x Estimated Civs             | 13.563              |
| 1/2 Estimated Civs            | 3.391               |
| ----------------------------- | --------------------|
*/
