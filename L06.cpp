#include <iostream>
using namespace std;

#define Zadanie6B

#ifdef Zadanie6A
int main()
{
    char tekst[100];
    char *t1;
    char *t2;
    cout << "wiadomosc: ";
    fgets(tekst, 100, stdin);

    int i = 0;
    t1 = &tekst[0];
    t2 = &tekst[0];
    for (i = 0; i < strlen(tekst); i++)
        *t1 = tekst[i];
    
    t1 = &tekst[0];

    for (int i=0;i<strlen(tekst)-1;i++)
    {
        if (*t1 >= 'a' && *t1 <= 'z' || *t1 >= 'A' && *t1 <= 'Z')
        {
            *t2 = *t1;
            t1++;
        }
        else
        {
            *t2 = ' ';
        }
        t2++;
    }

    tekst[i] = '\0';
    
    for (i = 0; i < strlen(tekst) - 1; i++)
    {
        cout <<tekst[i];
    }
}
#endif // DEBUG

#ifdef Zadanie6B
int main()
{
    char zdanie[] = "tomek ma rybki ";
    char *poczatek = zdanie; 
    char *koniec = zdanie;
    int dlugosc=0;
    cout << zdanie << endl;
    while (*koniec != '\0')
    {
        koniec++;
        if (*koniec == ' ' || *koniec == '\0')
        {
            char ost = *(koniec - 1);
            bool znak = (ost == ',' || ost == '!' || ost == '.' || ost == '?');
            dlugosc = poczatek - koniec - (int)znak;
            cout << dlugosc << "  ";
        }
        poczatek = koniec + 1;
    }
}
#endif // Zadanie6B

#ifdef Zadanie6C

#endif


