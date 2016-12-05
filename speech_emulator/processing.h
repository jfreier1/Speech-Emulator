#ifndef _PROCESSING_H_
#define _PROCESSING_H_

#include <string>
#include <vector>
#include <unordered_map>

using std::string;
using std::vector;
using std::unordered_map;

class Processing {
public:
   /**
    * Creates a new Processing object
    */
   Processing();

   Processing(string filename);

   ~Processing();

   vector<string> split(string str, char delimiter);

   /**
    * Adds a sentence to the arrayOfSentences
    */
   void addSentence(vector<string>);

   /**
    * Generates a sentence based on the syntax in arrayOfSentences
    */
   vector<string> generateSentence();


private:
   vector<vector<string> > vecOfSentences;
   unordered_map<string,vector<string> > wordsToFollow;


};

#endif /* _PROCESSING_H_ */
