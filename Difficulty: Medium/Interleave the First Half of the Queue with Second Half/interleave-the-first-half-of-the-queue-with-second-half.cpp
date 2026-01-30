class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        // code here
        int count=0;
        vector<int>a;
        vector<int>b;
        int sized=q.size()/2;
        int size=sized;
        while(size)
        {
            a.push_back(q.front());
            q.pop();
          size--;
        }
        size=sized;
        while(size)
        {
            b.push_back(q.front());
            q.pop();
            size--;
        }
        for(int i=0;i<sized;i++)
        {
            q.push(a[i]);
            q.push(b[i]);
        }
    }
};