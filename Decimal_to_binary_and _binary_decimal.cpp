#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

std::string decimal2binary(int n){

    std::string ans;
    while(n > 0){
        if(n % 2 == 1){
            ans += "1";
        }
        else{
            ans += "0";
        }
        n = n/2;
    }
    std::reverse(ans.begin(), ans.end());
    return ans;
}

int binary2decimal(std::string str){
    int ans = 0;
    int size = str.size();
    for(int i = 0 ; i < size ; i++){
        ans += (str[size - 1 - i] - '0') * pow(2 , i);
    }
    return ans;
}

int main(){

    std::cout << binary2decimal("100") << std::endl;

    return 0;
}