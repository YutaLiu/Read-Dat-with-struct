//
//  main.cpp
//  A3
//
//  Created by 劉育達 on 2020/4/22.
//  Copyright © 2020 劉育達. All rights reserved.
//


#include <iostream>


typedef unsigned long long uint64_t;

struct Trade_ST  {
    uint64_t timestamp;
    uint64_t index;
    bool buy;
    char padding[7];
};

int main()
{
    struct Trade_ST input;
    FILE *infile;
    infile = fopen ("/Users/liuyuda/Documents/Kronos/problems/A3/A3/A3/output.dat", "r");
    if (infile == NULL)
    {
      fprintf(stderr, "\nError opening file\n");
      exit (1);
    }

    // read file contents till end of file
    while(fread(&input, sizeof(struct Trade_ST), 1, infile)){
        printf ("\n%lld     %lld    ", input.timestamp,input.index );
        input.buy? printf("BUY"):printf("SELL");
    }
    fclose (infile);

    return 0;
}


