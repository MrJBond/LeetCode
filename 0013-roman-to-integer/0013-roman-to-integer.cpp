class Solution {
public:
   /* int ch(char s){
        switch(s){
            case 'I':
                return 1;
                break;
            case 'V':
                return 5;
                break;
            case 'X':
                return 10;
                break;
            case 'L':
                return 50;
                break;
            case 'C':
                return 100;
                break;
            case 'D':
                return 500;
                break;
            case 'M':
                return 1000;
                break;
                default:
                    return 0;
        }
    }
    int romanToInt(string s) {
    int i, n, ans=0, p=0;
    n=s.length()-1;
for( i=n; i>=0; i--)
{
 if( ch(s[i]) >= p)
  ans += ch(s[i]);
 else
  ans -= ch(s[i]);

p = ch(s[i]);
}
return ans;
    }*/
int value(char ch){
    switch(ch)
    {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
    }
}
int romanToInt(string r){
    vector<int> v;
    for(int i=0; i<r.length(); i++){
        if(value(r[i]) >= value(r[i+1])){
            v.push_back(value(r[i]));
        }
        else{
            v.push_back((-1)*value(r[i]));
        }
    }
    int sum = 0;
    for(int i=0; i<v.size();i++){
        sum+=v[i];
    }
    return sum;
}
};