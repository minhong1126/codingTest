#include <string>
#include <vector>
#include <iostream>
using namespace std;

string check(int i){
    string s;
    if(i < 10){
        s = "0" + to_string(i); 
    }
    else{
        s = to_string(i);
    }
    return s;
}

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    cin.tie(0); cout.tie(0);
    string answer = "";
    
    int curr = stoi(pos.substr(0, 2)) * 60 + stoi(pos.substr(3));
    int opStart = stoi(op_start.substr(0, 2)) * 60 + stoi(op_start.substr(3));
    int opEnd = stoi(op_end.substr(0, 2)) * 60 + stoi(op_end.substr(3));
    int videoLen = stoi(video_len.substr(0, 2)) * 60 + stoi(video_len.substr(3));
    
    if(curr >= opStart && curr <= opEnd){
        curr = opEnd;
    }
    
    for(int i = 0; i < commands.size(); i++){
        if(commands[i] == "next"){
            if(curr + 10 > videoLen){
                curr = videoLen;
            }else{
                curr += 10;
            }
        } 
        else if(commands[i] == "prev"){
            if(curr - 10 < 0){
                curr = 0;
            }else{
                curr -= 10;
            }

        }
    }
    
    if(curr >= opStart && curr <= opEnd){
        curr = opEnd;
    }
    
    answer = check(curr / 60) + ":" + check(curr % 60);
    
    return answer;
}
