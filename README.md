# Data Structure 2015

# Lecture Log

- **(2015-Jan-04)** This is the first meeting. All sections attend the same room. Basically, all you need to know is that this class is 3-0-6 style, which means that you have to study by yourself for 6 hours with 3 hours classroom.
##### (2015-Jan-06)
We are still on the _Introduction_. 
##### (2015-Jan-18)
##### (2015-Jan-20)
##### (2015-Jan-25)
`set` is the key data structure in this session. 
##### (2015-Jan-27) 
For this session, we assume that most of you have already read the class `map`. We skimmingly see several usage example of class `map`. The key idea is that a `map<KeyT,MappedT>` maps a key of type `KeyT` to a value of type `MappedT`. Map can be use with an array-like syntax. However, the underlying mechanics are very different. These are some major performance.
- Inserting (via `m.insert(make_pair(a,b))` or calling `m[a] = b`) takes O(lg n)
- Deleting (via `m.erase(a)`) also takes O(lg n)
- Searching (via `m.find(a)`) also takes O(lg n)
- Iterator of map cannot be used in _Random Access_ fashion, i.e., we cannot do m.begin()+10, but we can m.begin()++ or --m.end()

Notice that these are the same as set's. This is because internally, `map` and `set` are very similar data structure.

Another data structure discussed in this session is `priority_queue`. It is a data structure that 

##### (2015-Feb-01)
We have discussed Queue and Stack. Queue and Stack (and Priority Queue) have only a few methods. They are specialized Data Structure that can do very limits but they do them very well. Queue is specialized in FIFO with O(1) in all operations. Stack is LIFO with O(1).
