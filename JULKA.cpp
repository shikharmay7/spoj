SPOJ submission 25806928 (CPP14) plaintext list. Status: AC, problem JULKA, contest SPOJ. By shikhar_may7 

    #include<bits/stdc++.h>
    using namespace std;
     
    vector<int> bigSum(vector<int>a, vector<int>b)
    {
    	vector<int>ans;
    	
    	reverse(a.begin(),a.end());
    	reverse(b.begin(),b.end());
    	
    	int len = min(a.size(),b.size());
    	
    	int c = 0;
    	for(int i=0;i<len;i++)
    	{
    		int val = a[i] + b[i] + c;
    		ans.push_back(val%10);
    		c = val/10;
    	}
    	
    	if(a.size()>len)
    	{
    		for(int i=len; i<a.size();i++)
    		{
    			int val = a[i]+c;
    			ans.push_back(val%10);
    			c = val/10;
    		}
    	}
    	if(b.size()>len)
    	{
    		for(int i=len; i<b.size();i++)
    		{
    			int val = b[i]+c;
    			ans.push_back(val%10);
    			c = val/10;
    		}
    	}
    	while(c>0)
    	{
    		ans.push_back(c%10);
    		c/=10;
    	}
    	
    	reverse(ans.begin(), ans.end());
    	
    	return ans;
    	
    }
     
     
    vector<int> bigDiff(vector<int>x, vector<int>y)
    {
    	reverse(x.begin(), x.end());
    	reverse(y.begin(), y.end());
    	
    	vector<int>ans;
    	int len = min(x.size(),y.size());
    	for(int i=0;i<len;i++)
    	{
    		if(x[i]>=y[i])
    		{
    			ans.push_back(x[i]-y[i]);
    		}
    		else
    		{
    			x[i+1]--;
    			ans.push_back(10 + x[i]-y[i]);
    		}
    	}
    	
    	if(x.size()>len)
    	{
    		
    		for(int i=len;i<x.size();i++)
    		{
    			if(x[i]<0)
    			{
    				x[i+1]--;
    				ans.push_back(10+x[i]);
    			}
    			else
    				ans.push_back(x[i]);
    		}
    	}
    	
    	reverse(ans.begin(),ans.end());
    	vector<int>final;
    	int j=0;
    	while(ans[j]==0)	//removing leading zeros
    		j+=1;
    	
    	for(int i=j;i<ans.size();i++)
    		final.push_back(ans[i]);
    		
    	return final;	
    }
     
     
    vector<int> bigDiv(vector<int>x)
    {
    	vector<int>ans;
    	int rem=0;
    	for(int i=0;i<x.size();i++)
    	{
    		if(rem)
    		{
    			rem = rem*10 + x[i];
    			ans.push_back(rem/2);
    			rem = rem%2;
    		}
    		else
    		{
    			if(x[i]<2)
    			{
    				ans.push_back(0);
    				rem += x[i];
    			}
    			else
    			{
    				rem += x[i];
    				ans.push_back(rem/2);
    				rem = rem%2;
    			}
    		}
    	}
    	
    	vector<int>final;
    	int j=0;
    	while(ans[j]==0)
    		j+=1;
    	for(int i=j;i<ans.size();i++)
    		final.push_back(ans[i]);
    		
    	return final;	
    }
     
     
    int main()
    {
    	int t=10;
    while(t--)
    {
    	string s,d;
    	cin>>s>>d;
    	vector<int>sum;
    	vector<int>dif;
    	
    	for(int i=0;i<s.size();i++)
    		sum.push_back(s[i]-'0');
    	
    	for(int i=0;i<d.size();i++)
    		dif.push_back(d[i]-'0');
    		
    	vector<int>a,b;
    	
    	a = bigSum(sum, dif);
    	a = bigDiv(a);
    	
    	b = bigDiff(sum, a);
    	
    	for(int i=0;i<a.size();i++)
    		cout<<a[i];
    	cout<<endl;
    	for(int i=0;i<b.size();i++)
    		cout<<b[i];
    	cout<<endl;
    }
    	
    	return 0;
    } 
