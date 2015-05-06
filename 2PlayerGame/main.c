//
//  main.c
//  2PlayerGame
//
//  Created by Alain  on 2015-05-05.
//  Copyright (c) 2015 Alain . All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    
    srand(time(NULL));
    int r = rand(20);
    printf("%d\n", r);
    
    int a=12;
    int b=16;
    printf("Player 1: What does %d plus %d equal\n", a, b);
    

    int playerOneAnswer[2];
    scanf("%d\n", playerOneAnswer);
    
    int playerTwoAnswer[2];
    scanf("%d\n", playerTwoAnswer);
    
    // a way to ensure only integers are inputted
    
    
    
    
    return 0;
}
