from collections import OrderedDict

class LRUCache:

    def __init__(self, capacity: int):
        self.capacity = capacity
        self.cache = OrderedDict()

    def get(self, key: int) -> int:
        if key in self.cache:
            self.cache.move_to_end(key)
            return self.cache[key]
        return -1

    def put(self, key: int, value: int) -> None:
        if key in self.cache:
            self.cache.move_to_end(key)
        elif len(self.cache) >= self.capacity:
            self.cache.popitem(last=False)
        self.cache[key] = value


# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)


lRUCache = LRUCache(2);
lRUCache.put(1, 1); #// cache is {1=1}
lRUCache.put(2, 2); #// cache is {1=1, 2=2}
lRUCache.get(1);    #// return 1
lRUCache.put(3, 3); #// LRU key was 2, evicts key 2, cache is {1=1, 3=3}
lRUCache.get(2);    #// returns -1 (not found)
lRUCache.put(4, 4); #// LRU key was 1, evicts key 1, cache is {4=4, 3=3}
lRUCache.get(1);    #// return -1 (not found)
lRUCache.get(3);    #// return 3
lRUCache.get(4);    #// return 4