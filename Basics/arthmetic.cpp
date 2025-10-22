#include <iostream>

int main()
{
    // we have +,-,*,/,%(which gives us the remainder of anything)
    int balance = 500;
    // balance = balance + 1;
    // balance+=1; // how much you want to increment too we can change the value howeverv we like
    // balance++; // this increment balance by 1
    // same for the decrement
    // balance = balance - 500;
    // balance-=1;
    // balance--;
    // balance = balance * 3;
    // balance*=3; //both does the same the multiply balance by 3
    // balance = balance / 2;
    // balance /= 2;
    balance = balance % 2; // this only gives the remainder
    // the follow the paranthese first,divsion/multiply next,addtion/sub next similar to bodmas rule
    std::cout << balance;
    return 0;
}