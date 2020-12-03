/*
    6 Stringa compressa
    Data in ingresso una stringa (senza spazi) stampare a video una versione elaborata della
    stessa stringa, nella quale i caratteri ripetuti sono sostituiti con caratteri singoli, seguiti dal
    numero di occorrenze consecutive di quel carattere nella stringa originale. Ad esempio, data
    in ingresso la stringa "AABAAABBBCCCCDEEEEEE", stampare "A2B1A3B3C4D1E6".
*/

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    if (argc != 2) {
        cout << "errore, il programma deve prendere in ingresso una stringa \n";
        return -1;
    }
    const char * s = argv[1];
    int i = 0;
    while (s[i] != "\0") {
        char c = s[i];
        int count = 1;
        while (s[i + count] == c) {
            count++;
        }
        cout << c << count;
        i += count;
    }
    return 0;
}