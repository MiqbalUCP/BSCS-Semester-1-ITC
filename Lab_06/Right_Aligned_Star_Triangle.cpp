#include <iostream>
using namespace std;
int main()
{
    cout << "Enter Any 10 Integers ";
    int arr[10], sum = 0;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << " SUM = " << sum;
    return 0;
}
