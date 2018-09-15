#MeerKat

#Variables
arrAlpha = []
arrMorse = []
word = ''

#Main
alphaFile = open("Alphabet.txt")
morseFile = open("Morse.txt")
for line in alphaFile:
    arrAlpha.append(line)
for line in morseFile:
    arrMorse.append(line)
alphaFile.close()
morseFile.close()
word = raw_input("Enter word to convert to morse code: ")
for a in range(0,len(word)):
    for b in range(0,len(arrAlpha)):
        if word[a] == arrAlpha[b][0]:
            print(arrMorse[b])
            
