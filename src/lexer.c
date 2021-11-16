#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "include/Moreau.h"

int number_of_tokens = 0;
int curr_token = 0;

const char special_characters = { '(', ')', '[', ']', '{', '}', ':', '$', '\''};

char* read_file(char* fname)
{
    FILE* f = fopen(fname, "r");
    if(fname == NULL) 
    {

    }
}
