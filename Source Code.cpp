#include <bits/stdc++.h>
using namespace std;
//Reference:https://baymard.com/checkout-usability/credit-card-patterns
int main()
{
    int ch, ch1, ch2;
    string dc, c, c1, c2;
    cout << "Enter the issuer of the credit/Debit card\n1.American Express\n2.Visa\n3.Master Card\n4.RuPay" << endl;
    cin >> ch;
    if (ch == 1)
    {
        cout << "Enter the number of the Credit Card" << endl;
        cin >> c;
        if (c.size() != 15)
        {
            cout << "Invalid Card Number";
        }
        else if (c.size() == 15)
        {
            c1 = c.substr(0, 2);
            if (c1 == "34" || c1 == "37")
            {
                cout << "Card is valid for transaction" << endl;
            }
            else if (c1 != "34" || c1 != "37")
            {
                cout << "Card is not valid for transaction" << endl;
            }
        }
    }
    else if (ch == 2)
    {
        cout << "Enter the number of the Credit Card" << endl;
        cin >> c;
        if (c.size() >= 13 && c.size() <= 19)
        {
            if (c[0] == '4')
            {
                cout << "Card is valid for transaction" << endl;
            }
        }
        else
        {
            cout << "Card is not valid for transaction" << endl;
        }
    }
    else if (ch == 3)
    {
        cout << "Enter the number of the Credit Card" << endl;
        cin >> c;
        c2 = c.substr(0, 2);
        if (c.size() != 16)
        {
            cout << "Invalid Card Number";
        }

        else if (c.size() != 16)
        {
            if (c2 >= "51" && c2 <= "55")
            {
                cout << "Valid card for transactions" << endl;
            }
            else
            {
                cout << "Card is not valid for transaction" << endl;
            }
        }
    }
    else if (ch == 4)
    {
        cout << "Enter the number of the Credit Card" << endl;
        cin >> c;
        c2 = c.substr(0, 4);
        if (c.size() != 16)
        {
            cout << "Invalid Card number" << endl;
        }
        else if (c.size() != 16)
        {
            if (c2 == "6521" || c2 == "6522")
            {
                cout << "Valid card for transactions" << endl;
            }
            else
            {
                cout << "Card is not valid for transaction" << endl;
            }
        }
    }
    else
    {
        cout << "Invalid Input" << endl;
    }
    return 0;
}
