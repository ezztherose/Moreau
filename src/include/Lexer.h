#ifdef LEXER_H
#define LEXER_H

#include "Moreau.h"

MoreauToken** get_token_list();
MoreauToken** get_next_token();
int more_token_exist();
int backtrack_token();
MoreauToken* get_look_ahead_token();
int get_number_tokens();
void clean_lexer();

void lex_file(char*);
void lex(char*);
void print_token_list();
void print_token(MoreauToken*);

#endif