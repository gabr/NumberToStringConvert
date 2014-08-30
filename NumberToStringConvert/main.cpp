#include <iostream>

using namespace std;

int CharToInt(char c);

int main(int argc, char* argv[])
{
    cout << "Examples of how convert number to string and string to number." << endl;

    cout << CharToInt('7') << endl;
    return 0;
}

#pragma region Functions
int CharToInt(char c)
{
    return c - '0';
}
#pragma endregion
