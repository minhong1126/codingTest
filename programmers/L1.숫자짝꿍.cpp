// https://school.programmers.co.kr/learn/courses/30/lessons/131128
// 100점

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    vector <int> x(10, 0), y(10,0);
    vector <int> v;
    
    for(int i = 0; i < X.length(); i++){
        x[int(X[i]) - '0']++;
    }
    for(int i = 0; i < Y.length(); i++){
        y[int(Y[i]) - '0']++;
    }
    
    for(int i = 0; i < 10; i++){
        int cnt = 0;
        if(x[i] != 0 && y[i] != 0){
            if(x[i] < y[i]){
                cnt = x[i];
            }
            else{
                cnt = y[i];
            }
        }
        
        for(int j = 0; j < cnt; j++){
            v.push_back(i);
        }
    }
    
    if(v.size() != 0){
        if(v[v.size() - 1] == 0){
            answer = "0";
        }
        else{
            sort(v.rbegin(), v.rend());
            for(int i = 0; i < v.size(); i++){
                answer += (v[i] + '0');
            }   
        }
    }
    else{
        answer = "-1";
    }
    
    return answer;
}
