#include "processing.h"
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

Processing::Processing() {
}

Processing::Processing(string filename) {
  ifstream file(filename);
  string line;
  string whole = "";

  getline(file, line);
  while(!file.eof()){
    whole += line;
    getline(file, line);
  }

  vector<string> sentences = split(whole, '.');
  for(int i = 0; i<sentences.size(); i++) {
    sentences[i] = sentences[i] + " .";
    addSentence(split(sentences[i], ' '));
  }
}

Processing::~Processing() {
}

vector<string> Processing::split(string str, char delimiter) {
  vector<string> internal;
  stringstream ss(str);
  string tok;
  while(getline(ss, tok, delimiter)) {
    internal.push_back(tok);
  }
  return internal;
}

void Processing::addSentence(vector<string> sentence) {
  vecOfSentences.push_back(sentence);
  for(int i = 0; i < sentence.size() - 1; i++) {
    wordsToFollow[sentence[i]].push_back(sentence[i+1]);
  }
}

vector<string> Processing::generateSentence() {
  string currentWord = vecOfSentences[rand() % vecOfSentences.size()][0];
  vector<string> answer;
  while(currentWord != ".") {
    answer.push_back(currentWord);
    currentWord = wordsToFollow[currentWord][
      rand() % wordsToFollow[currentWord].size()];
  }
  answer.push_back(".");
  return answer;
}
