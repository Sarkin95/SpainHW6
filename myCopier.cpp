/** A program that opens a text file, reads and prints line by line to the screen.  
*   The text file name is passed on the command line as an argument.
*   The text file should be placed in /home/debian for this to work.
*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

#define FILE_PATH "/home/debian/SpainHW6"


int main(int argc, char* argv[]){
  if(argc!=3){
    cout << endl;
    cout << "Usage is reading-file and name of file: " << endl;
    cout << " e.g. ./myCopiercpp source.txt destination.txt" << endl;
    return 2;
  }
  string source(argv[1]);
  string destination(argv[2]);
  cout << endl;
  cout << "Starting the reading-file program" << endl;
  cout << "The current FILE Path is: " << FILE_PATH << endl;
  cout << "File name passed is: " << source << endl;
  cout << endl;

  fstream fs;
  fstream fd;
	string line;

  string filenameS = "/"+ source;
  string filenameD = "/"+ destination;
  cout << "The string filename is: " << filenameS << endl;

  string pathNameS = FILE_PATH + filenameS;
  string pathNameD = FILE_PATH + filenameD;
  cout << "The string pathName is: " << pathNameS << endl;
  cout << endl;

  // The c_str() method returns a C++ string as a C string.
  fs.open((pathNameS).c_str(), fstream::in);
  fd.open((pathNameD).c_str(), std::fstream::out);

  //fs.open((FILE_PATH + filename).c_str(), std::fstream::in);

  while(getline(fs,line))
  {
	cout << line << endl;
	fd << line << endl;
  }
  fs.close();
  fd.close();

}
