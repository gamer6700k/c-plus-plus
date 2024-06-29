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
 
