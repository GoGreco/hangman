#include <iostream>
#include <string>
using namespace std;

void turnsIntoScore(char letterList[], int listSize){
    for (int i = 0; i < listSize; i++) {
        letterList[i] = '_';
    }
}

bool checksIfChar(string suspitiousLetter){
    if(suspitiousLetter.size()>1){
            return false;
        }
        else{
            return true;
        }
}

int main(){


    //defining a word
    string word = "banana";

    int wordSize = word.size();

    char secretWord[wordSize];
    turnsIntoScore(secretWord, wordSize);
    
    
       


    //gameloop
    bool gameIsRunning = true;
    while(gameIsRunning == true){
        
        //printing the word as underscores
        cout<<"The word is: ";
        for (int i = 0; i < wordSize; i++) {
            cout<<secretWord[i]<<" ";
        }
        cout<<endl;
    
        //recieves a letter
        string letter;

        cout<<"Please Type a letter: ";
        cin>>letter;
        
        //checks if the letter is in fact a letter, not more than one
        bool letterIsLetter = checksIfChar(letter);
        //of it's more than one it keeps running the loop
        if (letterIsLetter == false){
            cout<<"Please Type one letter next time."<<endl;
        }
        //if not, the code continues
        else{
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
                        letterIsfound = false;
                    }
                }
            }
            else{
                cout<<"This Letter is not present"<<endl;
            }

        }
               
        
    
    }
    return 0;
}


