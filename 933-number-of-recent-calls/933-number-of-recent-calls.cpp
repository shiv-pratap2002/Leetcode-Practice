class RecentCounter {
public:
    vector<int>q;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        q.push_back(t);
        int ll = t - 3000;
        int i = q.end() - upper_bound(q.begin(),q.end(),ll);
        if(q[lower_bound(q.begin(),q.end(),ll)-q.begin()]==ll) i++;
        cout<<(q[upper_bound(q.begin(),q.end(),ll)-q.begin()])<<'\n';
        return i;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */