SPOJ submission 25896322 (CPP14) plaintext list. Status: AC, problem AP2, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int lli;
     
     
    int main()
    {
    	lli t;
    	cin>>t;
    	while(t--)
    	{
    		lli a3, l3, sum;
    		cin>>a3>>l3>>sum;
    		lli n = (2*sum)/(a3+l3);
    		lli d = (l3-a3)/(n-5);
    		lli a = a3 - 2*d;
    		
    		cout<<n<<"\n";
    		for(int i=0;i<n;i++)
    			printf("%lld ", a + i*d);
    		printf("\n");
    	}
    	return 0;
    } 
