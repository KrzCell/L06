#include <iostream>
using namespace std;

int main()
{
    char tekst[100],t2[100];
    cout << "wiadomosc: ";
    fgets(tekst, 100, stdin);
    int i = 0;
    while (i < strlen(tekst) - 1)
    {
        if (tekst[i] >= 'a' && tekst[i] <= 'z' || tekst[i] >= 'A' && tekst[i] <= 'Z')
            t2[i] = tekst[i];
        else
        {
            t2[i] = ' ';
        }
        i++;
    }
    t2[i] = '\0';
    cout << t2;

}


