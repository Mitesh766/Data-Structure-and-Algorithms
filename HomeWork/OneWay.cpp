#include <bits/stdc++.h>

using namespace std;
int main()
{
    string str1, str2;
    cin >> str1;
    cin >> str2;
    int l1 = str1.length();
    int l2 = str2.length();
    int letters1[26] = {0};
    int letters2[26] = {0};
    for (int i = 0; i < l1; i++)
    {
        letters1[str1[i] - 'a']++;
    }
    for (int i = 0; i < l2; i++)
    {
        letters2[str2[i] - 'a']++;
    }

    int diffCharacter = 0;
    for (int i = 0; i < 26; i++)
    {
        if (letters1[i] != letters2[i])
        {
            diffCharacter++;
        }
    }
    

    if (l1 == l2 && diffCharacter == 2)
    {
        cout << "True";
    }

    else if ((l1 == (l2 - 1) || l2 == (l1 - 1)) && diffCharacter == 1)
    {

        cout << "True";
    }

    else
    {
        cout << "False";
    }

    return 0;
}