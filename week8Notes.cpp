#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main(){

    /*
        Streams in Programming
        The most common sources and destingations for data are hard drive files
            Must know how to read/write disk filed to work with large amounts of data
        cin = Console INput
        cout = Console OUTput

        Source -> Medium -> Target

        << (Insertion operator)
        >> (Extraction operator)

        You can also read files on your hard disk
        -Plain Txt filed
        -Binary info (such as a picture or video file.)

        To read/write files, you use variables of the stream types:
        ifstream : Input stream
        ofstream : Output stream
        fstream : Input AND Output stream

        #include <fstream>

        To open a stream for reading a file:
        ifstream is;                    (data type: ifstream    variable: is)
        is.open("read.txt");

        To open a stream for writing in a file:
        ofstream os;                    (data type: ofstream    variable: os)
        os.open("write.txt");

        Possible errors:
        1. File can be corrupted
        2. File name can be wrong
        3. Wrong data type (ofstream instead of ifstream.)
        4. File doesn't exist
        5. Insufficient permissions to open/edit files.

        Can check if the stream opened correctly 
        ifstream is;
        is.open(<correct path to file>)

        if (is.fail())
        {
            cout << "Could not open the file to read" << endl;
        }

        If the file was not opened correctly, is.fail() is set to true.

        Can close a stream with the .close() function.

        1. Create a variable for stream
        2. Open stream
        3. Check if the stream was successfully opened
        4. Read data from the stream
        5. Close stream
    */

   // Create an input stream using ifstream data type

   ifstream is;

   // Associate a file to the stream.

   is.open("Read.txt");

   // Check if stream opened successfully

   if (is.fail())
   {
    cout << "File failed to open." << endl;
    return 1;
   }

   // Reading something from the file:
   string x; // Could be int x, if the source file had numbers in it.

    // is >> x; // cin >> x   Both use the extraction operator.
    // is >> x stops reading when it sees a new line or a space

    // cout << x << endl;

    int count_of_lines;

    while (is >> x)
    {
        cout << x << " ";
        count_of_lines ++;
    }

    
   cout << endl << "Number of lines: " << count_of_lines;
   cout << endl << "Done reading the contents." << endl;

   is.close();


   // Writing to a file.

   ofstream os;
   os.open("Write.txt");

   if (os.fail())
   {
    cout << "Failed to open file." << endl;
    return 1;
   }

    os << "Number of Lines: " << count_of_lines;

   os.close();

    /*
        Day 2:
        Getline vs >>
        >> reads only until the first space or fist newline character.
        Getline reads an entire line, until the newline character.
    */

   // Illustrating how getline works

   cout << "DAY 2" << endl << endl;

   ifstream input_stream;

   input_stream.open("Read.txt");

   if (input_stream.fail())
   {
    cout << "Failed to open." << endl;
    return 1;
   }
    
    string line;
    getline(input_stream, line);

    cout << line << endl;

    cout << endl << endl;

    while(getline(input_stream, line))
    {
        cout << line << endl;
    }

    input_stream.close();

 // --------------------------------------------------------------------------------------------------
    string a;
    cout << "Enter a string." << endl;
    cin >> a;
    cin.clear();
    cin.ignore();
    cout << "Using cin, the string you entered was: " << a << endl;

    cout << "Enter the same string." << endl;
    getline(cin, a);
    
    cout << "Using getline, the string you entered was: " << a << endl;

    string b;
    cout << "Enter a string again." << endl;
    cin >> a;
    getline(cin, b);
    cout << "You entered: " << a << endl;
    cout << "You entered: " << b << endl;

    cout << endl << endl;

 // -----------------------------------------------------------------------------------------------------
    /*
        As you can see when compiling this program, mixing cin and getline causes errors!!
        This is caused by how cin and getline operate.
        cin will take all characters until a whitespace or endline.
        The stream still has the content provided by the user via cin.
        Everything up to the first space is included in string A, while the space and 
        everything else will go into string B.
        This is why we use cin.clear() and cin.ignore(1000, '\n')
        This clears everything in the cin stream, allowing the user to input 2 values.
        \n is a character created by pressing enter, this is the newline character.

        cin.clear clears any errors caused by cin. Like perhaps, inputting a letter into an
        int variable.

        To read multiple lines from a file, you can use a while loop.
        while(getline(is, string variable))
        {

        }

        Similar to file streams, C++ has a string stream, to read and maniulate strings
        Allows you to:
            - Work with strings as if they were streams
            - Concatenate strings
            - Tokenize strings

        Tokenizing refers ti breaking a string into smaller parts that are separated
        by a delimiter.
        
        We can, for instance, take a string for a movie review and make a comma the delimiter.
        "Movie name, Release Year, Rating, # of votes"
        We can tokenize this into 4 different, smaller values.

        #include <sstream> (string stream)
        stringstream <Var. name>(string to be made a stream);

        Ex: 
        string line;

        stringstream test(line);
        string token;

        getline(test, token, ',');
        (This makes token equal to the test string up until there is a comma. This
        deletes the copied part from the original string, leaving a smaller string behind.)

        functions like stoi change string to string to int.
        stof change string to float.
    */

   return 0;

}