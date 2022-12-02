# ABA problem
## Introduction
When implement a CAS Loops but design incorrect, multi-threads interleave and share memory addresses will be possible to encounter ABA problem.
* `if the thread uses two operations on the same memory address, and the two read operations get the same value, we will judge same value that means value hasn't changed. However, within the time interval between these two read operations, another thread may have modified the value.`
## Workaround
* Tagged state reference
* Intermediate nodes
* Deferred reclamation
