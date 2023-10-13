#include <iostream>
#include <cassert>

using namespace std;

int findWord(string, string);

string fixWord(string, int, string, string);

int main () {

    string sentence = "The quick brown fox";
    
    string word_to_find = "quick";

    string new_word = "very quick";

    int word_position = findWord(sentence, word_to_find);

    string new_sentence = fixWord(sentence, word_position, new_word, word_to_find);
    cout << new_sentence << endl;
    return 0;
}

int findWord (string sentence, string word_to_find)
{
    int word_position;

    word_position = sentence.find(word_to_find);

    return word_position;
}

string fixWord(string sentence, int word_position , string word_to_find, string new_word)
{
    string new_sentence = sentence.replace(word_position, word_to_find.length(), new_word);

    return new_sentence;
}