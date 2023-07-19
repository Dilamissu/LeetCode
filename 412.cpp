// Fizz Buzz

/*
* Given an integer n, return a string array answer (1-indexed) where:
* 
* answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
* answer[i] == "Fizz" if i is divisible by 3.
* answer[i] == "Buzz" if i is divisible by 5.
* answer[i] == i (as a string) if none of the above conditions are true.
*/

// Remember you can do these for loops instead of if-elase cases

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        print(ans(n));
    }
    vector<string> ans(int n){
        // Runtime: 4ms (faster than 63.05%) | Memory: 7.80MB (less than 79.66%)
        vector<string> answer;
        for(int i = 0;i < n;i++){
            answer.push_back(to_string(i+1));
        }
        for(int i = 2;i < n;i+=3){
            answer[i] = "Fizz";
        }
        for(int i = 4;i < n;i+=5){
            answer[i] = "Buzz";
        }
        for(int i = 14;i < n;i+=15){
            answer[i] = "FizzBuzz";
        }
        return answer;
    }
};