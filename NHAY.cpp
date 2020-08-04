SPOJ submission 26374457 (CPP14) plaintext list. Status: AC, problem NHAY, contest SPOJ. By shikhar_may7 (shikhar), 2020-08-04 09:51:22.

    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
    	#endif
     
    	int n;
    	while(cin>>n)
    	{
    		string pat,str;
    		cin>>pat>>str;
    		int p = pat.size();
    		int s = str.size();
     
    		int pi[p];
    		pi[0]=0;
    		for(int i=1;i<p;i++)
    		{
    			int l = pi[i-1];
    			while(l>0 && pat[i]!=pat[l])
    				l = pi[l-1];
    			if(pat[i]==pat[l])
    				l++;
    			pi[i]=l;
    		}
     
    		int prev=0;
    		vector<int>ans;
    		for(int i=0;i<s;i++)
    		{
    			int l = prev;
    			while(l>0 && str[i]!=pat[l])
    				l = pi[l-1];
    			if(str[i]==pat[l])
    				l++;
    			prev=l;
    			if(l==p)
    				ans.push_back(i-p+1);
    		}
     
    		if(ans.size()==0)
    			cout<<"\n"<<endl;
    		else
    		{
    			for(int i=0;i<ans.size();i++)
    				cout<<ans[i]<<endl;
    		}
    	}
    	return 0;
    }
