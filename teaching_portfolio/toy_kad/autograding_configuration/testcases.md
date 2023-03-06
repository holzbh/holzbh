## Testcases

### Next Door Test
  * Initialization
    * peer00: ```python3 -u hw4.py 0 9000 2```
    * peer01: ```python3 -u hw4.py 1 9001 2```
  * Actions Taken:
    * peer00: ```BOOTSTRAP peer01 9001```
    * peer00: ```STORE 5 apples```
    * peer00: ```FIND_VALUE 5```
    * ```QUIT ALL REMAINING PEERS IN LEXICOGRAPHICAL ORDER``` 

### Stored Locally & Value Not Found
  * Initialization
    * peer00: ```python3 -u hw4.py 0 9000 2```
    * peer08: ```python3 -u hw4.py 8 9001 2```
  * Actions Taken:
    * peer08: ```BOOTSTRAP peer00 9000```
    * peer00: ```STORE 1 apples```
    * peer00: ```FIND_VALUE 1```
    * peer08: ```FIND_VALUE 5```
    * peer00: ```FIND_VALUE 5```
    * peer08: ```FIND_VALUE 1```
    * ```QUIT ALL REMAINING PEERS IN LEXICOGRAPHICAL ORDER``` 

### Late Join Test
  * Initialization
    * peer00: ```python3 -u hw4.py 0 9000 2```
    * peer08: ```python3 -u hw4.py 8 9001 2```
    * peer11: ```python3 -u hw4.py 11 9002 2```
  * Actions Taken:
    * peer00: ```BOOTSTRAP peer08 9001```
    * peer00: ```STORE 9 apples```
    * peer00: ```FIND_VALUE 9```
    * peer08: ```FIND_VALUE 9```
    * peer11: ```BOOTSTRAP peer00 9000```
    * peer00: ```STORE 11 carrots```
    * peer08: ```FIND_VALUE 11```
    * peer11: ```FIND_VALUE 9```
    * peer11: ```STORE 9 bananas```
    * peer11: ```FIND_VALUE 9```
    * peer08: ```FIND_VALUE 9```
    * peer00: ```FIND_VALUE 9```
    * ```QUIT ALL REMAINING PEERS IN LEXICOGRAPHICAL ORDER``` 

### LRU test 
  * Initialization
    * peer00: ```python3 -u hw4.py 0 9000 2```
    * peer08: ```python3 -u hw4.py 8 9001 2```
    * peer09: ```python3 -u hw4.py 9 9002 2```
    * peer10: ```python3 -u hw4.py 10 9003 2```
  * Actions Taken:
    * peer00: ```BOOTSTRAP peer3 9002```
    * peer08: ```BOOTSTRAP peer3 9002```
    * peer09: ```BOOTSTRAP peer00 9000```
    * peer10: ```BOOTSTRAP peer3 9002```
    * peer00: ```STORE 9 apples```
    * peer00: ```FIND_NODE 9``` <!-- NEW -->
    * peer00: ```STORE 9 bananas``` <!-- NEW -->
    * peer08: ```FIND_VALUE 9``` <!-- NEW -->
    * peer00: ```FIND_VALUE 9``` <!-- NEW -->
    * peer09: ```FIND_VALUE 9``` <!-- NEW -->
    * peer00: ```STORE 8 carrots```
    * peer00: ```STORE 10 dates```
    * peer00: ```FIND_VALUE 10```
    * peer00: ```FIND_VALUE 9```
    * peer00: ```FIND_VALUE 8```
    * peer00: ```FIND_VALUE 10```
    * ```QUIT ALL REMAINING PEERS IN LEXICOGRAPHICAL ORDER``` 

### General Test 1 (store, retrieve, and non-existent items) <!-- FAILURE -->
  * Initialization
    * peer00: ```python3 -u solution.py 0 9000 3```
    * peer01: ```python3 -u solution.py 1 9001 3```
    * peer03: ```python3 -u solution.py 3 9002 3```
    * peer08: ```python3 -u solution.py 8 9003 3```
    * peer09: ```python3 -u solution.py 9 9004 3```
  * Actions Taken:
    * peer01: ```BOOTSTRAP peer00 9000```
    * peer03: ```BOOTSTRAP peer00 9000```
    * peer08: ```BOOTSTRAP peer00 9000```
    * peer09: ```BOOTSTRAP peer00 9000```
    * peer00: ```STORE 0 apples```
    * peer00: ```FIND_VALUE 0```
    * peer01: ```FIND_VALUE 0```
    * peer03: ```STORE 0 bananas```
    * peer03: ```FIND_VALUE 0```
    * peer08: ```FIND_VALUE 0```
    * peer09: ```FIND_NODE 3``` <!-- NEW -->
    * peer09: ```STORE 3 carrots``` <!-- NEW -->
    * peer09: ```STORE 9 dates``` <!-- NEW -->
    * peer00: ```FIND_VALUE 3``` <!-- NEW -->
    * peer01: ```FIND_VALUE 3``` <!-- NEW -->
    * peer08: ```FIND_VALUE 9``` <!-- NEW -->
    * peer08: ```FIND_NODE 9``` <!-- NEW -->
    * peer08: ```FIND_VALUE 9``` <!-- NEW -->
    * peer00: ```FIND_VALUE 0```
    * peer08: ```STORE 9 eggplant``` <!-- NEW -->
    * peer01: ```FIND_VALUE 9```
    * peer03: ```FIND_NODE 8``` <!-- NEW -->
    * peer03: ```FIND_VALUE 9``` <!-- NEW -->
    * peer03: ```STORE 8 fennel``` <!-- NEW -->
    * peer03: ```FIND_VALUE 8``` <!-- NEW -->
    * peer09: ```FIND_VALUE 8``` <!-- NEW -->

### General Test 2 (late join)
  * Initialization
    * peer00: ```python3 -u hw4.py 0 9000 2```
    * peer01: ```python3 -u hw4.py 1 9001 2```
    * peer08: ```python3 -u hw4.py 8 9002 2```
  * Actions Taken:
    * peer00: ```BOOTSTRAP peer01 9001```
    * peer01: ```BOOTSTRAP peer00 9000```
    * peer00: ```STORE 8 apples```
    * peer01: ```FIND_VALUE 8```
    * peer00: ```FIND_VALUE 8```
    * peer01: ```STORE 9 bananas```
    * peer01: ```FIND_VALUE 9```
    * peer00: ```FIND_VALUE 9```
    * peer08: ```BOOTSTRAP peer00 9000```
    * peer08: ```FIND_VALUE 9```
    * peer08: ```STORE 9 carrots```
    * peer00: ```FIND_VALUE 9```
    * peer01: ```FIND_VALUE 9```
    * peer08: ```FIND_VALUE 9```
    * peer00: ```FIND_VALUE 8```
    * peer01: ```FIND_VALUE 8```
    * peer08: ```FIND_VALUE 8```
    * ```QUIT ALL REMAINING PEERS IN LEXICOGRAPHICAL ORDER``` 

### Intermediate Quit
  * Initialization
    * peer00: ```python3 -u hw4.py 0 9000 2```
    * peer01: ```python3 -u hw4.py 1 9001 2```
  * Actions Taken:
    * peer00: ```BOOTSTRAP peer01 9001```
    * peer01: ```BOOTSTRAP peer1 9000```
    * peer00: ```STORE 1 apples```
    * peer01: ```FIND_VALUE 1```
    * peer01: ```FIND_VALUE 1```
    * peer01: ```QUIT```
    * peer00: ```FIND_VALUE 1```
    * ```QUIT ALL REMAINING PEERS IN LEXICOGRAPHICAL ORDER``` 
