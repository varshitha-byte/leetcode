class Solution {
public:
    int sign =1;
    int solve(int index,string s,int result,int sign){
        if(index>=s.size()||!isdigit(s[index])){
            if(sign==1){
                return result;
            }else{
                return -1*result;
            }
        }

        int digit=s[index]-'0';

        if(result>(INT_MAX-digit)/10){
            if(sign==1){
                return INT_MAX;
            }else{
                return INT_MIN;
            }
        }

        result=result*10+digit;
        return solve(index+1,s,result,sign);
    }
 
    int myAtoi(string s) { 
        int index=0;

        while (index<s.size()&& s[index]==' '){
            index++;
        }

        if(index>=s.size()){
            return 0;
        }

        if(s[index]=='-'){
            sign=-1;
            index++;
        }else if(s[index]=='+'){
            index++;
        }

        if(index>=s.size()){
            return 0;
        }

        if(!isdigit(s[index])){
            return 0;
        }

        return solve(index,s,0,sign);
    }

    
};