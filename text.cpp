#include <iostream>
#include <string>
using namespace std;


int main(){
    string word = "banana";
    string letter = "b";

    string secretWord = "______";
    int found = word.find(letter, 0);

    bool letterIsfound = true;

            //checks if the letter appear once
            int letterIndex = word.find(letter, 0);
            //if the letter is found at least onece, it will be looked for again
            if(letterIndex != string::npos){

                secretWord[letterIndex]= letter.at(0);
                while(letterIsfound == true){

                    //looking for the letter again
                    letterIndex = word.find(letter, letterIndex+1);
                    if(letterIndex != string::npos){   
                        secretWord[letterIndex]= letter.at(0);
                    }
                    else{
                        continue;
                    }
                }
            }

    return 0;
}