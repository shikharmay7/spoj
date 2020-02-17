//ANARC09A - Seinfeld (dynamic-programming)

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);	//for faster i/o
    cin.tie(NULL);
    
    string str;
    int c=1;
    while(cin>>str)
    {
        if(str[0]=='-')
            return 0;
        
        if(str.length()%2==1)		//can only be balanced if the length is even!
        	return -1;
        
        vector<char> v;       //stack can also serve the same purpose
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='}' && !v.empty())
            {
                if(v.back()=='{')     // {} is balanced hence popped 
                    v.pop_back();
                else
			v.push_back(str[i]);    //else push
            }
            else
            {
                v.push_back(str[i]);    //else push
            }
            
        }
        // the vector contents can be expressed by regex }*{* where * is the Kleene Closure.
        float c1=0,c2=0;    //c1 & c2 maintain the count of '{' & '}' respectively.
        for(int i=v.size()-1;i>=0;i--)
        {
            if(v[i]=='{')
                c1+=1;
            else
                c2+=1;
        }
        cout<<c<<". "<<ceil(c1/2)+ceil(c2/2)<<endl;
        c+=1;
    }
    
    return 0;
}
