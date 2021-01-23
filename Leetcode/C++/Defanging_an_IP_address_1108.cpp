class Solution {
public:
    string defangIPaddr(string address) {
        char str[22];
        int iter2=0;
        for(int iter1=0;iter1<address.size();iter1++)
        {
            if(address[iter1]!='.'){
                str[iter2]=address[iter1];
                iter2++;
            }
            else if(address[iter1]=='.'){
                str[iter2]='[';
                str[iter2+1]='.';
                str[iter2+2]=']';
                iter2+=3;
            }
        }
        str[iter2]='\0';
        return str;
    }
};
