#include <iostream>

int main() {
    int res = 0;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int i = 0; i < 10; i++) {
        res += arr[i];
    }
    std::cout << res << std::endl;
    return 0;
}