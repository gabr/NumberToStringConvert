#include <iostream>

using namespace std;

int CharToInt(char c);
char OneDigitIntToChar(int i);
int CStringToInt(char* text);

int main(int argc, char* argv[])
{
    cout << "Examples of how convert number to string and string to number." << endl;

    cout << CharToInt('7') << endl;
    cout << OneDigitIntToChar(13) << " " << OneDigitIntToChar(-7) << " " << OneDigitIntToChar(3) << endl;
    cout << CStringToInt("17") << endl;
    return 0;
}

#pragma region Functions
int CharToInt(char c)
{
    return c - '0';
}

char OneDigitIntToChar(int i)
{
    if (i > 9 || i < 0)
        return '0';
    
    return i + '0';
}

int CStringToInt(char* text)
{
    return strtol(text, NULL, 10);
}
#pragma endregion
