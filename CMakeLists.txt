cmake_minimum_required(VERSION 3.16)
project(Project_1_Lexer)

set(CMAKE_CXX_STANDARD 14)

add_executable(Project_1_Lexer AddAutomaton.cpp ColonAutomaton.cpp ColonDashAutomaton.cpp CommaAutomaton.cpp FactsAutomaton.cpp Lexer.cpp LParenAutomaton.cpp main.cpp MultiplyAutomaton.cpp PeriodAutomaton.cpp QmarkAutomaton.cpp RParenAutomaton.cpp SchemesAutomaton.cpp Token.cpp RulesAutomaton.cpp QueriesAutomaton.cpp IDAutomaton.cpp StringAutomaton.cpp CommentAutomaton.cpp UndefinedAutomaton.cpp EOFAutomaton.cpp)
