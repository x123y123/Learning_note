# Different between "->" and "."

* structure:
```C
typedef struct Mystruct {
    int member_a;
} Mystruct_t;
```
## variable Mystruct
```C
Mystruct_t s;
s.member_a = 1;
```

## pointer to Mystruct
```C
Mystruct_t* ps;
ps->member_a = 1;
```

