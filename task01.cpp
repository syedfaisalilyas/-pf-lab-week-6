#include <iostream>
using namespace std;
string boolIsSimilar(string, string);

main()
{
    string word1, word2;
    cout << "Enter first word:";
    cin >> word1;
    cout << "Enter second word:";
    cin >> word2;
    string similar = boolIsSimilar(word1, word2);
    cout << similar;
}

string boolIsSimilar(string word1, string word2)
{
    string similar;
    if (word1 == word2)
    {
        similar = "Yes";
    }
    else
    {

        similar = "No";
    }
    return similar;
}