#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <limits>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;

int main() {
    cout << "Enter numbers (space or comma separated): ";

    string input;
    getline(cin, input);

    for (char &ch : input) {
        if (ch == ',') ch = ' ';
    }

    stringstream ss(input);
    string token;
    vector<double> numbers;

    while (ss >> token) {
        try {
            size_t pos;
            double value = stod(token, &pos);

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

    sort(numbers.begin(), numbers.end());

    double median;
    int n = numbers.size();
    if (n % 2 == 0) {
        median = (numbers[n / 2 - 1] + numbers[n / 2]) / 2.0;
    } else {
        median = numbers[n / 2];
    }

    map<double, int> frequency;
    int maxFreq = 0;
    for (double num : numbers) {
        maxFreq = max(maxFreq, ++frequency[num]);
    }

    vector<double> modes;
    if (maxFreq > 1) {
        for (auto &pair : frequency) {
            if (pair.second == maxFreq) {
                modes.push_back(pair.first);
            }
        }
    }

    double range = maxVal - minVal;

    double varianceSum = 0;
    for (double num : numbers) {
        varianceSum += pow(num - average, 2);
    }

    double stdDev = (numbers.size() > 1)
                        ? sqrt(varianceSum / (numbers.size() - 1))
                        : 0.0;

    cout << "\n Number Analysis Results\n";
    cout << "---------------------------\n";
    cout << "Count   : " << numbers.size() << endl;
    cout << "Minimum : " << minVal << endl;
    cout << "Maximum : " << maxVal << endl;
    cout << "Sum     : " << sum << endl;
    cout << "Average : " << average << endl;
    cout << "Median  : " << median << endl;
    cout << "Range   : " << range << endl;
    cout << "Std Dev : " << stdDev << endl;

    cout << "Mode    : ";
    if (modes.empty()) {
        cout << "No mode";
    } else {
        for (double m : modes) {
            cout << m << " ";
        }
    }
    cout << endl;

    cout << "Sorted  : ";
    for (double num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
