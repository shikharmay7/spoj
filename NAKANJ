    //Minimum Knight Moves
    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int t;
    	cin>>t;
    	while(t--)
    	{
    		string start, last;
    		cin>>start>>last;
    		int beg = (start[0]-97+1)*10 + (start[1]-48);   //converts a1 type to 11
    		int end = (last[0]-97+1)*10 + (last[1]-48);
    		int arr[8] = {12,21,19,8,-12,-21,-19,-8};
    		
    		int flag[90]; 
    		memset(flag,-1,90*sizeof(int));     //serves the purpose of visited array as well as count 
    		
    		queue<int> q;       //bfs!
    		q.push(beg);
    		flag[beg]=0;
    		while(!q.empty())
    		{
    			int val = q.front();
    			q.pop();
    			if(val==end)
    				break;
    			for(int i=0;i<8;i++)
    			{
    				if(flag[val + arr[i] ]==-1 && (val+arr[i]>10) && ((val+arr[i])%10!=9) && ((val+arr[i])%10!=0))
    				{
    					q.push(val + arr[i]);
    					flag[val+arr[i]]=flag[val]+1;
    				}
    			}
    		}
    		cout<<flag[end]<<endl;      //return status of destination
    	}
    	return 0;
    } 
