#include <iostream>
#include <cmath>

int main() {
    int last_number, last_streak = 1, longest_number, longest_streak = 1;
    std::cin >> last_number;
    longest_number = last_number;

    int temp;
    while (last_number != 0) {
        std::cin >> temp;
        if (last_number == temp) {
            last_streak++;
        } else {
            last_number = temp;
            last_streak = 1;
        }
        if (longest_streak < last_streak) {
            longest_number = last_number;
            longest_streak = last_streak;
        }
    }

    std::cout << "Longest sequence: " << longest_streak << " times " << longest_number << std::endl;

    return 0;
}