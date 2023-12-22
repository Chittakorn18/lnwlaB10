#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int count = 0;
    float sum = 0.0;
    float sum_of_square = 0.0;
    string textline;

    ifstream source("score.txt");

    if (!source.is_open()) {
        cout << "Unable to open the file." << endl;
        return 1;
    }

    float num;
    while (source >> num) {
        sum += num;
        sum_of_square += pow(num, 2);
        count++;
    }

    cout << "Number of data = " << count << "\n";
    cout << setprecision(3);
    cout << "Mean = " << sum / count << "\n";

    float variance = (sum_of_square / count) - pow(sum / count, 2);
    float std_deviation = sqrt(variance);
    cout << "Standard deviation = " << std_deviation << "\n";

    source.close();
    return 0;
}
