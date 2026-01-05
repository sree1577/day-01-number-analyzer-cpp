#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

int main() {
    cout << "Enter numbers separated by spaces: ";

    string input;
    getline(cin, input);

    stringstream ss(input);
    string token;
    vector<double> numbers;

    while (ss >> token) {
        try {
            size_t pos;
            double value = stod(token, &pos);

            // Check if full token is a valid number
            if (pos != token.length()) {
                throw invalid_argument("Invalid");
            }

            numbers.push_back(value);
        } catch (...) {
            cout << " Invalid input ignored: '" << token << "'" << endl;
        }
    }

    if (numbers.empty()) {
        cout << " No valid numbers entered. Program terminated." << endl;
        return 0;
    }

    double minVal = numbers[0];
    double maxVal = numbers[0];
    double sum = 0;

    for (double num : numbers) {
        if (num < minVal) minVal = num;
        if (num > maxVal) maxVal = num;
        sum += num;
    }

    double average = sum / numbers.size();

    cout << "\n Number Analysis Results\n";
    cout << "---------------------------\n";
    cout << "Count   : " << numbers.size() << endl;
    cout << "Minimum : " << minVal << endl;
    cout << "Maximum : " << maxVal << endl;
    cout << "Sum     : " << sum << endl;
    cout << "Average : " << average << endl;

    return 0;
}
