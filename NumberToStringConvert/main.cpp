#include <iostream>

using namespace std;

int CharToInt(char c);
char OneDigitIntToChar(int i);
void IntToCString(int i);

int main(int argc, char* argv[])
{
    cout << "Examples of how convert number to string and string to number." << endl;

    cout << CharToInt('7') << endl;
    cout << OneDigitIntToChar(13) << " " << OneDigitIntToChar(-7) << " " << OneDigitIntToChar(3) << endl;
    IntToCString(253); cout << endl;
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

void IntToCString(int i)
{
    char result[64];
    sprintf_s(result, "%i", i);
    cout << result;
}
#pragma endregion
