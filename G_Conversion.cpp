#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S;
    getline(cin, S);

    for (int i = 0; i < S.size(); ++i)
    {
        if (S[i] == ',')
        {
            S[i] = ' ';
        }
    }
    for (int i = 0; i < S.size(); ++i)
    {
        if (isupper(S[i]))
        {
            S[i] = tolower(S[i]);
        }
        else if (islower(S[i]))
        {
            S[i] = toupper(S[i]);
        }
    }

    cout << S << endl;

}
