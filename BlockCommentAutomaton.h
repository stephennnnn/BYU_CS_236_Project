#ifndef PROJECT1_STARTER_CODE_BLOCKCOMMENTAUTOMATON_H
#define PROJECT1_STARTER_CODE_BLOCKCOMMENTAUTOMATON_H


#include "Automaton.h"
using namespace std;

class BlockCommentAutomaton : public Automaton {
private:
   void S1(const string& input);

   void S2(const string& input);

   void S3(const string& input);

public:
   BlockCommentAutomaton() : Automaton(TokenType::COMMENT) {}

   void S0(const string& input);

};

#endif //PROJECT1_STARTER_CODE_BLOCKCOMMENTAUTOMATON_H
