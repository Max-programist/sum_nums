#include <iostream>

int main() {
    int res = 0;
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    res = (arr[0] + arr[9]) * 5;

    std::cout << res << std::endl;
    return 0;
}