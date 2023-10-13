#include <iostream>
using namespace std;

// String Functions

int findWrongWord(string, string);

string correctTheWord(string, string, int, string);

int main(){
    string sentence = "Any spelling mstake imaginable";
    string misspelt_word = "mstake";
    string correct_word = "mistake";

    // Fix the sentence

    cout << "------ Find and Replace String Program ------"<< endl << endl;
    cout << "Original sentence = " << sentence << endl;

    int position_of_wrong_word = findWrongWord(sentence, misspelt_word);

    sentence = correctTheWord(sentence, correct_word, position_of_wrong_word, misspelt_word);

    cout << "Corrected sentence: " << sentence << endl;
    return 0;
}

int findWrongWord(string sentence, string misspelt_word)
{
    //.find funciton finds the word provided as a parameter and returns the position of
    // the first character of the word.
    int position_of_the_word = sentence.find(misspelt_word);

    return position_of_the_word;
}

string correctTheWord(string sentence, string correct_word, int position_of_wrong_word, string misspelt_word)
{
    sentence.replace(position_of_wrong_word, misspelt_word.length(), correct_word);
    // .replace function takes the position of the incorrect word, the length of the
    // misspelt word we're looking for, and the actual correct word that we are replacing the wrong word with.

    return sentence;

}
