
//  Hangover solution
//poj.org
//
//  Created by shivamzaz on 4/30/16.
//  Copyright (c) 2014 shivamzaz. All rights reserved.
//
#include <iostream>
using namespace std;
#define INT_MAX 10000000

int main(int argc, const char * argv[])
{

    double length;
    string line;
    while(cin >> length)
    {
        if (length == 0.0) {
            cout << endl;
            break;
        }
        double sum = 0.0;
        int cards = 1;
        for (int i = 2; i < INT_MAX; i++) {
            sum += (1.0 / i);
            if (sum > length) {
                break;
            }
            cards++;
        }
        cout << cards << " card(s)"<< endl;

    }

    return 0;
}
