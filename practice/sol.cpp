class StockPrice {
public:
    map<int, int> records;      
      map<int, Set<int>> vals;
    
    StockPrice() {
         records = new map<>();
          vals = new map<>();
    }
    
    void update(int timestamp, int price) {
         if (records.containsKey(timestamp)) {
             int prevPrice = records.get(timestamp);
             Set<int> set = vals.get(prevPrice);
             set.remove(timestamp);
             if (set.size() == 0) {
                 vals.remove(prevPrice);
             }
         }
         records.put(timestamp, price);
         vals.putIfAbsent(price, new HashSet<>());
         vals.get(price).add(timestamp);
     }
     
      int current() {
         return records.lastEntry().getValue();
     }
     
      int maximum() {
         return vals.lastKey();
     }
     
      int minimum() {
         return vals.firstKey();
     }
 }; 
        
        
