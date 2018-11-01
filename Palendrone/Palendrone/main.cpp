//
//  main.cpp
//  tests
//
//  Created by David Lett on 10/25/18.
//  Copyright © 2018 David Lett. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
void reverseString(char arr[100]);
char reversedInput[100];


int main() {

    char input[100];


    cout<<"Please enter a string"<<endl;
    cin.getline(input, 100);
    cout<<"You entered "<<input<<endl;

    reverseString(input);
    cout<<"The reverse is "<<reversedInput<<endl;

    system("pause");
    return 0;
}

void reverseString(char arr[]) 
{
    size_t len = strlen(arr);
    for (size_t i = 0; len-- > 0; ++i)
        reversedInput[i] = arr[len];
}
