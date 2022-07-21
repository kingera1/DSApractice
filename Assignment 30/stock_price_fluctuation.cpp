class StockPrice {
public:
    unordered_map<int, int> mp;
    multiset<int> S;
    int current_time;
    
    StockPrice() {
        current_time = 0;
    }
    
    void update(int timestamp, int price) {
        if(mp.count(timestamp) > 0){
            S.erase(S.find(mp[timestamp]));
        }
        mp[timestamp] = price;
        S.insert(price);
        if(current_time < timestamp){
            current_time = timestamp;
        }  
    }
    
    int current() {
        return mp[current_time];
        
    }
    
    int maximum() {
        auto it = S.end();
        return  *(--it);
    }
    
    int minimum() {
        return *S.begin();
    }
    
};
