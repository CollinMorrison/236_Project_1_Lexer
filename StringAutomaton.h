//
// Created by Collin Morrison on 9/20/22.
//

#ifndef PROJECT_1_LEXER_STRINGAUTOMATON_H
#define PROJECT_1_LEXER_STRINGAUTOMATON_H


#include "Automaton.h"

class StringAutomaton : public Automaton
{
private:
    void S1(const std::string& input);
    void S2(const std::string& input);
public:
    StringAutomaton() : Automaton(TokenType::STRING) {}  // Call the base constructor

    void S0(const std::string& input);
};


#endif //PROJECT_1_LEXER_STRINGAUTOMATON_H
