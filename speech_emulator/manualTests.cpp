#include "processing.h"
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {






    Processing processingThing("texts/DonaldTrump.txt");

for(int j= 0; j<1000; j++) {
  vector<string> a = processingThing.generateSentence();
  for(int i = 0; i<a.size(); i++) {
    cout<<a[i]<<" ";
  }
  cout<<endl<<endl;
}
//  cout<<endl;
//  cout<<j;




















  /*
  //Processing processingThing("texts/DonaldTrump");
  cout<<"here";

  Processing processingThinga("texts/simple");
  processingThinga.generateSentence();

 for(int i = 0; i<1000; i++) {
    vector<string> thing = processingThing.generateSentence();
    for(int j = 0; j<thing.size(); j++) {
      cout<<thing[j]<<" ";
    }
    cout<<endl;
  }




  Processing processingThing;



  vector<string> v;
  v.push_back("1");
  v.push_back("2");
  v.push_back("3");
  v.push_back("4");
  v.push_back(".");

  vector<string> p;
  p.push_back("my");
  p.push_back("name");
  p.push_back("is");
  p.push_back("trump");
  p.push_back(".");

  vector<string> q;
  q.push_back("one");
  q.push_back("2");
  q.push_back("three");
  q.push_back("4");
  q.push_back(".");

  processingThing.addSentence(v);
  processingThing.addSentence(p);
  processingThing.addSentence(q);

  for(int i = 0; i<10; i++) {
    vector<string> thing =
    //  processingThing.split("1 2 3 4 5 6", ' ');

    processingThing.generateSentence();
    for(int j = 0; j<thing.size(); j++) {
      cout<<thing[j]<<" ";
    }
    cout<<endl;
  }
*/
  return 0;
}
