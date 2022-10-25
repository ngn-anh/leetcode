class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int sum=0;
        for(auto x:operations)
        {
            
             if(x=="+")
            {
               int top1=st.top();
               st.pop();
               int top2=st.top();
               st.pop();
               int sum1=top1+top2;
                st.push(top2);
                st.push(top1);
               st.push(sum1);
               sum+=st.top();
            }
            else if(x=="D")
            {
                sum+=st.top()*2;
                 st.push(st.top()*2);

            }
            else if(x=="C")
            {
                sum-=st.top();
                st.pop();
            }
            else
            {
                stringstream ss;
                ss<<x;
                int tmp;
                ss>>tmp;
                sum += tmp;
                st.push(tmp);
            }
        }
        while(!st.empty())
	{
		cout<<st.top();
		st.pop();
	}
        return sum;
    }
};
