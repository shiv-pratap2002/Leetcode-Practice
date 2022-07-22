class MyHashMap {
public:
   unordered_map<int,int>p;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        p[key] = value;
    }
    
    int get(int key) {
        if(p.find(key)!=p.end())
        return p[key];
        return -1;
    }
    
    void remove(int key) {
        p.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */