#include <bits/stdc++.h>
using namespace std;

void print(string s, int n)
{
    cout << s << n << endl;
}

int decimalToBinary(int n)
{
    int ans = 0;

    int base = 1;
    while (base <= n)
    {
        base *= 2;
    }
    base /= 2;
    while (base > 0)
    {
        int lastDigit = n / base;

        n -= (lastDigit * base);
        ans = ans * 10 + lastDigit;
        base /= 2;
    }
    return ans;
}

int binaryToDecimal(int n)
{
    int ans = 0;
    int base = 1;
    while (n > 0)
    {
        int lastDigit = n % 10;
        if (lastDigit == 0 || lastDigit == 1)
        {
            ans += (lastDigit * base);
            n = n / 10;
            base *= 2;
        }
        else
        {
            cout << "conversion not posible";
            return 0;
        }
    }
    return ans;
}

int decimalToOctal(int n)
{
    int ans = 0;

    int base = 1;
    while (base <= n)
    {
        base *= 8;
    }
    base /= 8;
    while (base > 0)
    {
        int lastDigit = n / base;

        n -= (lastDigit * base);
        ans = ans * 10 + lastDigit;
        base /= 8;
    }
    return ans;
}

int octalToDecimal(int n)
{
    int ans = 0;
    int base = 1;
    while (n > 0)
    {
        int lastDigit = n % 10;
        if (lastDigit > 0 || lastDigit < 7)
        {
            ans += (lastDigit * base);
            n = n / 10;
            base *= 8;
        }
        else
        {
            cout << "conversion not posible";
            return 0;
        }
    }
    return ans;
}

string decimalToHexa(int n)
{
    string ans = "";
    int base = 1;
    while (base <= n)
    {
        base *= 16;
    }
    base /= 16;

    while (base > 0)
    {
        int lastDigit = n / base;
        print("last Digit = ", lastDigit);
        n -= (lastDigit * base);
        if (lastDigit >= 0 && lastDigit <= 9)
        {
            ans = ans + to_string(lastDigit);
        }
        else if (lastDigit >= 10 && lastDigit <= 15)
        {
            char add = 'A' + lastDigit - 10;

            ans.push_back(add);
        }
        base /= 16;
    }
    return ans;
}

int HexaDecimalToDecimal(string str)
{
    int ans = 0;
    int s = str.size();
    int base = 1;
    for (int i = s - 1; i >= 0; i--)
    {
        cout << str[i] << endl;
        if (str[i] >= '0' && str[i] <= '9')
        {
            ans += base * (str[i] - '0');
            cout << "number" << (str[i] - '0') << endl;
        }
        else if (str[i] >= 'A' && str[i] <= 'F')
        {
            ans += base * (str[i] - 'A' + 10);
            cout << "letter" << (str[i] - 'A' + 10) << endl;
        }
        else
        {
            cout << "conversion not posible";
            return 0;
        }
        cout << ans << endl;
        base *= 16;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    int binNum = decimalToBinary(n);

    int octNum = decimalToOctal(n);

    string hexNum = decimalToHexa(n);

    cout << "decimal To Binary = " << binNum << endl;

    cout << "binary to decimal = " << binaryToDecimal(binNum) << endl;

    cout << "decimal To Octal = " << octNum << endl;

    cout << "Octal to decimal = " << octalToDecimal(octNum) << endl;

    cout << "decimal To Hexa = " << hexNum << endl;

    cout << "Hexa Decimal To Decimal" << HexaDecimalToDecimal(hexNum) << endl;
}