#include <iostream>
using namespace std;

int main()
{
    char tekst[100];
    char *t1, *t2;
    cout << "wiadomosc: ";
    fgets(tekst, 100, stdin);

    int i = 0;
    t1 = &tekst[0];
    
    for (i = 0; i < strlen(tekst) - 1; i++)
    {
        *t1 = tekst[i];
        t1++;
    }
    t1 = &tekst[0];
    
    while (i < strlen(t1) - 1)
    {
        if (*t1 >= 'a' && *t1 <= 'z' || *t1 >= 'A' && *t1 <= 'Z')
        {
            
            *t2 = *t1;
        }
        else
        {
            *t2 = ' ';
        }
        i++;
    }

    *t2 = '\0';
    cout << t2;

}


