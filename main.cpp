#include <iostream>

using namespace std;

int sum(int num1, int num2) {
    return num1 + num2;
}

int main()
{
    int num1, num2;
    cout << "请输入第一个数:";
    cin >> num1;
    cout << "请输入第二个数:";
    cin >> num2;
    cout << sum(num1, num2);
    return 0;
}

