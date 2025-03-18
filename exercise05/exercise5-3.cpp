#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

const int vn = 5;
const char vowel[vn] = {'a','e','i','o','u'};

int main()
{
    cout << "Enter word (q to quit) : " << endl;
    int nVowel = 0;
    int nConsonant = 0;
    int nOther = 0;
    char word[30];

    while(cin >> word)
    {
        if(isalpha(word[0]))
        {
            if(strlen(word)==1 && word[0] == 'q')
                break;

            char x = tolower(word[0]);

            switch(x){
                case 'a': nVowel=nVowel+1; break;
                case 'e': nVowel=nVowel+1; break;
                case 'i': nVowel=nVowel+1; break;
                case 'o': nVowel=nVowel+1; break;
                case 'u': nVowel=nVowel+1; break;
                default : nConsonant=nConsonant+1; 
            }

        }else {
            nOther=nOther+1;
        }
    }

    cout << nVowel << " words beginning with vowels" << endl;
    cout << nConsonant << " words beginning with consonants" << endl;
    cout << nOther << " others" << endl;

    return 0;
}