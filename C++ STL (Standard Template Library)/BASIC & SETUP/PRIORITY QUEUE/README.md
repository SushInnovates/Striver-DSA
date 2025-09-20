# 📘 Priority Queue in C++ STL

🔹 **What is a Priority Queue?**  
A priority queue in C++ is a container adaptor that works like a queue but elements are retrieved in **priority order** (not FIFO).  
- By default, it works as a **Max Heap** (largest element on top).  
- Can also be used as a **Min Heap** with custom comparator.

It is defined in the `<queue>` header.

---

## 🔹 Why use Priority Queue?
- Provides efficient access to the **highest/lowest priority element**.  
- Useful in **heaps, graphs (Dijkstra’s Algorithm), scheduling, and greedy problems**.  
- Based on **binary heap implementation**.

---
## 🔹 Commmon Functions
```
- pq.push(x) → Insert element
- pq.emplace(x) → Construct & insert element
- pq.top() → Access top element (max or min)
- pq.pop() → Remove top element
 - pq.size() → Get number of elements
 -pq.empty() → Check if queue is empty
 -pq.swap(other) → Swap contents with another queue
```

## 🔹 Summary
- Default: Max Heap (priority_queue<int>)
- Min Heap: priority_queue<int, vector<int>, greater<int>>
- Fast access to top element, no random access.
- Widely used in Greedy algorithms, Graph problems, Scheduling.

## 🔹 Syntax
```
priority_queue<datatype> maxPQ; // Max Heap (default)
priority_queue<datatype, vector<datatype>, greater<datatype>> minPQ; // Min Heap
```

## 🔹 Example
```
priority_queue<int> maxD;
```
