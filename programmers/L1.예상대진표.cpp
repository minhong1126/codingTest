#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int cnt = 0;
    
    while(true){
        cnt++;
        if(a % 2 != 0){
            a++;
        }
        if(b % 2 != 0){
            b++;
        }
        
        a /= 2;
        b /= 2;
        if(a == b){
            break;
        }
    }
    
    return cnt;
}