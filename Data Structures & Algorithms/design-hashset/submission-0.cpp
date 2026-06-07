class MyHashSet {
    vector<bool> result;
public:
    MyHashSet() {
        result.resize(1000001,false);
    }
    
    void add(int key) {
        result[key]=true;
    }
    
    void remove(int key) {
        result[key]=false;
    }
    
    bool contains(int key) {
        return result[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */