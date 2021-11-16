#include "include/Moreau.h"
#include "include/Declarations.h"

#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

MoreauToken** token_list = NULL;
int number_of_tokens = 0;
int curr_token = 0;

const char special_characters = { '(', ')', '[', ']', '{', '}', ':', '$', '\''};

char* read_file(char* fname)
{
    FILE* f = fopen(fname, "r");
    if(f == NULL) 
    {
        fprintf(stderr, "\"%s\" is not available.\n", f);
        exit(0);
    }

    fseek(f, 0, SEEK_END);
    int length = ftell(f);

    fseek(f, 0, SEEK_SET);	
	int size = sizeof(char)*(length);

	char* contents = malloc(size + 1);
	if(contents == NULL){		
		fprintf(stderr, "Memory error\n");
		return 0;
	}
	fread(contents, size, 1, f);
	fclose(f);

	contents[size] = '\0';

	return contents;
}

void lex(char* text)
{
    
}

void lex_file(char* file_name)
{
    char* f_content = read_file(file_name);
    lex(f_content);
    free(f_content);
}

int backtrack_token()
{
    curr_token--;
    return curr_token;
}

MoreauToken** get_token_list()
{
    if(curr_token >= number_of_tokens) return NULL;
    else
    {
        MoreauToken* n = token_list[curr_token];
        curr_token++;
        return n;
    }
}

MoreauToken** get_next_token();
MoreauToken* get_look_ahead_token();

void add_token(MoreauToken* token, int line, int character, int indent)
{
    //set_token_position(token, line, character, indent);
    number_of_tokens++;
    token_list = realloc(token_list, (number_of_tokens)*sizeof(MoreauToken*));
    token_list[number_of_tokens - 1] = token;
}

int is_char_indent(char c)
{
    
}

int get_number_tokens()
{

}

