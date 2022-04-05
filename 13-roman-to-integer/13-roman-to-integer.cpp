class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        for (int i = 0; i < s.length(); i++){
            if(s[i] == 'I' && s[i+1] == 'V'){
                total = total + 4;
                i++;
            }
            else if(s[i] == 'I' && s[i+1] == 'X'){
                total = total + 9;
                i++;
            }
            else if(s[i] == 'X' && s[i+1] == 'L'){
                total = total + 40;
                i++;
            }
            else if(s[i] == 'X' && s[i+1] == 'C'){
                total = total + 90;
                i++;
            }
            else if(s[i] == 'C' && s[i+1] == 'D'){
                total = total + 400;
                i++;
            }
            else if(s[i] == 'C' && s[i+1] == 'M'){
                total = total + 900;
                i++;
            }
            else if(s[i] == 'I'){
                total = total + 1;
            }
            else if(s[i] == 'V'){
                total = total + 5;
            }
            else if(s[i] == 'X'){
                total = total + 10;
            }
            else if(s[i] == 'L'){
                total = total + 50;
            }
            else if(s[i] == 'C'){
                total = total + 100;
            }
            else if(s[i] == 'D'){
                total = total + 500;
            }
            else if(s[i] == 'M'){
                total = total + 1000;
            }
        }
        return total;
        }
};