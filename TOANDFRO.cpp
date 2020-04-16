SPOJ submission 25781596 (CPP14) plaintext list. Status: AC, problem TOANDFRO, contest SPOJ. By shikhar_may7

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int lli;
     
    int main()
    {
    	while(1)
    	{
    		lli c;
    		cin>>c;
    		if(c==0)
    			break;
    		
    		string s;
    		cin>>s;
    		lli l = s.size();
    		
    		lli r = l/c;
    		
    		char mat[r][c];
    		
    		for(lli i=0;i<l;i++)
    		{
    			mat[i/c][i%c] = s[i];
    		}
     
    		
    		for(lli i=0;i<r;i++)
    		{
    			if(i%2==1)
    			{
    				for(lli j=0;j<c/2;j++)
    				{
    					char temp = mat[i][j];
    					mat[i][j] = mat[i][c-j-1];
    					mat[i][c-j-1] = temp;
    				}
    			}
    		}
    		
    		string out = "";
    		
    		for(lli i=0;i<c;i++)
    		{
    			for(lli j=0;j<r;j++)
    			{
    				out+=mat[j][i];
    			}
    		}			
    		
    		cout<<out<<endl;
    			
    	}
    	return 0;
    } 
