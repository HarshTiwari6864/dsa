class MyHashMap {
    private:
        static const int SIZE = 1000; // Size of the underlying array
        vector<list<pair<int, int>>> buckets;
    
        // Hash function
        int hash(int key) {
            return key % SIZE;
        }
    
    public:
        MyHashMap() {
            buckets.resize(SIZE);
        }
    
        void put(int key, int value) {
            int index = hash(key);
            for (auto& [k, v] : buckets[index]) {
                if (k == key) {
                    v = value; // Update existing
                    return;
                }
            }
            buckets[index].emplace_back(key, value); // Insert new
        }
    
        int get(int key) {
            int index = hash(key);
            for (const auto& [k, v] : buckets[index]) {
                if (k == key) {
                    return v;
                }
            }
            return -1; // Not found
        }
    
        void remove(int key) {
            int index = hash(key);
            auto& bucket = buckets[index];
            for (auto it = bucket.begin(); it != bucket.end(); ++it) {
                if (it->first == key) {
                    bucket.erase(it);
                    return;
                }
            }
        }
    };

    


    /*hsh map building include insert value and key 
    getting value of the key
    removing key and value*/