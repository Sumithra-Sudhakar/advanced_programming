#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter number to find factorial: ";
    cin >> num;

    int fact=1;

    for(int i=1;i<=num;i++)
    {
        fact*=i;
    }

    cout << "The factorial of " << num << " is " << fact << "." << endl;
    return 0;
}
