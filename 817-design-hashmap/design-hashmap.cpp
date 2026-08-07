class MyHashMap {
public:
    vector<vector<pair<int, int>>> a;
    MyHashMap() {
        a.resize(1000);      
    }
    
    void put(int key, int value) {
        int index = key % 1000;
        for(auto &i : a[index]) {
            if(i. first == key) {
                i.second = value;
                return;
            }
        }
        a[index].push_back({key, value});
    }
    
    int get(int key) {
        int index = key % 1000;

        for(auto &i : a[index]) {
            if(i.first == key) {
                return i.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int index = key % 1000;

        for(int i = 0; i < a[index].size(); i++)
        {
            if(a[index][i].first == key) {
                a[index].erase(a[index].begin() + i);
            }
        }
        return;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */