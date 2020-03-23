SPOJ submission 25605943 (CPP14) plaintext list. Status: AC, problem GOO, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int lli;
    int main()
    {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		int n;
    		cin>>n;
    		lli x = pow(2,n-1);
    		lli y = (n+1)*pow(2,n-2);
    		cout<<x<<" "<<y<<endl;
    	}
    	return 0;
    } 
