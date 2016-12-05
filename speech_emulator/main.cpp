#include "processing.h"
#include "string.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char** argv) {
  string filename = argv[1];
  Processing processingThing("texts/" + filename);

  string times = argv[2];
  int timess = stoi(times);
  for(int j= 0; j<timess; j++) {
    cout<<j;
    vector<string> randomSentence = processingThing.generateSentence();
    int startPosition = 0;
    while(randomSentence[startPosition][0] == ' ') {
     startPosition++;
    }
    cout<<"\t"<<randomSentence[startPosition];
    for(int i = startPosition + 1; i<randomSentence.size(); i++) {
      cout<<" "<<randomSentence[i];
    }
    cout<<endl<<endl;
  }
  return 0;
}
