#include <fstream>
#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;


int main() {
     int freq[12];
  const char* filename = "input.txt";
  std::ifstream inFile(filename);

  // Make sure the file stream is good
  if(!inFile) {
    cout << endl << "Failed to open file " << filename;
    return 1;
  }


  
  while(true) {
      long n;
    inFile >> n;
    freq[n]=0;
    freq[n]++;
    if( inFile.eof() ) break;
    cout << std::setw(10) << n;
     cout<< freq[n];
      }
  cout << endl;
  return 0;
}