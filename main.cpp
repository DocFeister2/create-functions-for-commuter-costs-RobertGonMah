#include <iostream>
#include <iomanip>

using namespace std;

const double DOLLARS_PER_GALLON = 4.49;     // cost of gas per gallon
const double MILES_PER_COMMUTE = 20.5;    // miles in one round-trip commute
const double MILES_PER_GALLON = 36;       // car fuel efficiency

int myCommutes;
double myCost;

// Converts gas dollars into number of commutes
double toCommutes(double gasDollars) {
  double gasGallons = gasDollars / DOLLARS_PER_GALLON; // Decided to declare and initialize these on one line for less code.
  double gasMiles = gasGallons * MILES_PER_GALLON;
  double numCommutes = gasMiles / MILES_PER_COMMUTE;

  return numCommutes;
}

// // Converts number of commutes into gas cost
double toDollars(int numOfCommutes) {
  double commuteCost = ((MILES_PER_COMMUTE / MILES_PER_GALLON) * DOLLARS_PER_GALLON); // Decided to declare and initialize this on one line for less code.
  commuteCost = commuteCost * numOfCommutes;
  
  return commuteCost;
}

int main() {

  // Not too sure if this was needed but the extra numbers seemed irrelevalant for this application.
  cout << fixed << setprecision(2);

  cout << "$20 will buy you: " << toCommutes(20) << " commutes." << endl;
  cout << "$100.50 will buy you: " << toCommutes(100.50) << " commutes." << endl;
  cout << "$500 will buy you: " << toCommutes(500) << " commutes." << endl;
  cout << "$8000 will buy you: " << toCommutes(8000) << " commutes." << endl;

  cout << "Enter the number of commutes you'd like to do: ";
  cin >> myCommutes;

  myCost = toDollars(myCommutes);

  cout << "Great idea! Let's drive! ";
  cout << myCommutes << " commutes will cost you $" << myCost << endl;

  cout << "All done!" << endl;
}
