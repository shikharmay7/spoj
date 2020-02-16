SPOJ submission 25410610 (CPP14) plaintext list. Status: AC, problem ALIEN2, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
    typedef long long int lli;
    int main()
    {
    	lli n, k;
    	cin>>n>>k;
    	lli arrA[n], arrB[n];
    	
    	for(lli i=0;i<n;i++)
    		cin>>arrA[i];
    	for(lli i=0;i<n;i++)
    		cin>>arrB[i];
    	lli i;	
    	for(i=1;i<n;i++)
    	{
    		lli prev = arrA[i];
    		arrA[i] = min(arrA[i-1]+arrA[i], arrB[i-1]+arrB[i]+arrA[i]);
    		arrB[i] = min(arrB[i-1]+arrB[i], arrA[i-1]+prev+arrB[i]);
    	
    		if(min(arrA[i], arrB[i]) > k)
    			break;
    	}	
      
    	cout<<i<<" "<<min(arrA[i-1],arrB[i-1])<<endl;	
      
      return 0;
    }  
    
    
    
    //	lli dp[n];
    //	bool flag;
    //	if(arrA[0]<arrB[0])
    //	{
    //		dp[0] = arrA[0];
    //		flag=1;
    //	}
    //	else
    //	{
    //		dp[0] = arrB[0];
    //		flag=0;
    //	}
    //	//flag=1 for train A;
    //	//flag=0 for train B;
    //	
    //	for(lli i=1;i<n;i++)
    //	{
    //		if(flag==1)
    //		{
    //			if(dp[i-1] + arrA[i] < dp[i-1] + arrB[i-1] + arrB[i]) 
    //			{
    //				dp[i] = dp[i-1] + arrA[i];
    //			}
    //			else
    //			{
    //				dp[i] = dp[i-1] + arrB[i-1] + arrB[i];
    //				flag = !flag;
    //			}
    //		}
    //		if(flag==0)
    //		{
    //			if(dp[i-1] + arrB[i] < dp[i-1] + arrA[i-1] + arrA[i])
    //			{
    //				dp[i] = dp[i-1] + arrB[i];
    //			}	
    //			else
    //			{
    //				dp[i] = dp[i-1] + arrA[i-1] + arrA[i];
    //				flag= !flag;
    //			}
    //		}
    //	}
    //	
    //	for(int i=0;i<n;i++)
    //		cout<<dp[i]<<" ";
