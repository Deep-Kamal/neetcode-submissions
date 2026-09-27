class MyHashSet {
public:
    vector<bool> map;
    MyHashSet() {
        map = vector<bool>(1000001,false);
    }
    
    void add(int key) {
        map[key] = true;
    }
    
    void remove(int key) {
        map[key] = false;
    }
    
    bool contains(int key) {
        return map[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */