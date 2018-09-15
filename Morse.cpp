//MeerKat
#include <string.h>
#include <iostream>
#include <fstream>

using namespace std;

main () {
//Variables
    char word[10], outMorse[10][10], alphabet[26][2], morse[26][9];
    int cnt = 0;
//#################################

    ifstream alphaFile, morseFile;
    morseFile.open("Morse.txt");
    alphaFile.open("Alphabet.txt");
    while (alphaFile) {
        alphaFile.getline(alphabet[cnt],2);
        morseFile.getline(morse[cnt],9);    
        cnt++;
    }
    cout << "Enter word to convert to morse code: ";
    cin >> word;
    for (int a = 0; a < strlen(word); a++) {
        for (int b = 0; b < 26; b++) {
            if (word[0] == alphabet[b][0]) {
                strcpy(outMorse[a],morse[b]);
            }
        }
    }
    for (int c = 0; c < strlen(word); c++) {
        cout << morse[c] << "  ";
    }
    cout << "\n";
/*
*/
    alphaFile.close();
    morseFile.close();
	return 0;
}
