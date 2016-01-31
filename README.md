# Data Structure 2015

# Lecture Log

#### (2015-Jan-04) 
This is the first meeting. All sections attend the same room. Basically, all you need to know is that this class is 3-0-6 style, which means that you have to study by yourself for 6 hours with 3 hours classroom.

#### (2015-Jan-06)
We are still on the _Introduction_. 

#### (2015-Jan-18)
See [lab02](lab02). For this period, we start with a very basic data structure called `pair`. We familiarize ourself with the notion of _Template_, i.e., specification of types into a class. For example, `pair<int,string>` is a data structure that holds `int` and `string` together.

Additionally, we also talk about vector

#### (2015-Jan-20)
See [lab03](lab03). We talked about `iterator`

#### (2015-Jan-25)
See [lab04](lab04). `set` is the key data structure in this session. We have discussed set in breif earlier. `set`, as the name implies, contains distinct items. It is non-associative, meaning that item in the data structure is not associated with any index. We cannot identify s[0], s[1], s[2], or something like that. We have to access it via `s.find(value)`. Set is specialized in searching, using `s.find(value)` is very fast with respect to vector. This is the list of important function of set and their complexity
- `s.insert(a)` is O(lg n)
- `s.erase(a)` is O(lg n)
- `s.find(a)` is O(lg n)

#### (2015-Jan-27) 
See [lab05](lab05). For this session, we assume that most of you have already read the class `map`. We skimmingly see several usage example of class `map`. The key idea is that a `map<KeyT,MappedT>` maps a key of type `KeyT` to a value of type `MappedT`. Map can be use with an array-like syntax. However, the underlying mechanics are very different. These are some major performance.
- Inserting (via `m.insert(make_pair(a,b))` or calling `m[a] = b`) takes O(lg n)
- Deleting (via `m.erase(a)`) also takes O(lg n)
- Searching (via `m.find(a)`) also takes O(lg n)
- Iterator of map cannot be used in _Random Access_ fashion, i.e., we cannot do m.begin()+10, but we can m.begin()++ or --m.end()

Notice that these are the same as set's. This is because internally, `map` and `set` are very similar data structure.

Another data structure discussed in this session is `priority_queue`. It is a data structure that 

##### (2015-Feb-01)
See [lab06](lab06). We have discussed `queue` and `stack`. Queue and Stack (and Priority Queue) have only a few methods. They are specialized Data Structure that can do very limits but they do them very well. Queue is specialized in FIFO with O(1) in all operations. Stack is LIFO with O(1).
