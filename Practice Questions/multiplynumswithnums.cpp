#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rate, energy, steps;
    
    // Input the rate, energy, and number of steps
    cout << "Enter the rate, energy, and number of steps: ";
    cin >> rate >> energy >> steps;

    vector<int> results;
    results.push_back(rate);  // Include the initial rate in the output

    // Multiply rate by energy for each step and store the result
    for (int i = 1; i < steps; i++) {
        rate *= energy;
        results.push_back(rate);
    }
    
    // Output the results
    cout << "Output: ";
    for (int result : results) {
        cout << result << " ";
    }
    cout << endl;

    return 0;
}
