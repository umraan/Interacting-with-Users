//
//  main.c
//  Interacting
//
//  Created by Umraan Ahmed on 2019-03-20.
//  Copyright © 2019 Umraan Ahmed. All rights reserved.
//

#include <stdio.h>

int main() {
    int i;
    char s[100];
    
    printf("Type a word:\n");
    scanf("%s", s);
    for(i = 0; s[i]; i++);
    
    printf("Length of word: %d\n", i);
}


