#include "prog1.h"
#include <stdio.h>
#include <string.h>

/*

Bemenet: sztringeket tartalmazó tömb. Számoljuk meg, hogy a bemenetben
hány olyan sztring van, melynek a hossza legalább 2 s az
első karaktere egyezik az utolsó karakterével. A visszatérési
érték ezen feltételeket kielégítő sztringek száma legyen.

Példák (Python kóddal, majd át kell írni C-be):

match_ends(["aba", "xyz", "aa", "x", "bbb"])    ->  3
match_ends(["", "x", "xy", "xyx", "xx"])        ->  2
match_ends(["aaa", "be", "abc", "hello"])       ->  1

*/

int match_ends(int n, string words[]){

    int i = 0;
    int j = strlen(words[i]) - 1;
    while(i<j){
        if(words[i] != words[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;

}


int main()
{
    string words[] = { "aba", "xyz", "aa", "x", "bbb" };
    int words_meret = 5;

    // match_ends() meghívása itt...
    printf("Ennyi szó palindrom: %d", match_ends(words[i]));

    for (int i = 0; i < words_meret; ++i)
    {
        puts(words[i]);
    }

    return 0;
}