SPOJ submission 25896383 (CPP14) plaintext list. Status: AC, problem EIGHTS, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int lli;
     
    int main()
    {
    	lli t;
    	cin>>t;
    	while(t--)
    	{
    		lli n;
    		cin>>n;
    		lli a = 192;
    		lli d = 250;
    		cout<<a+ (n-1)*d<<endl;
    	}
    	return 0;
    } 
