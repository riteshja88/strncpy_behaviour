# strncpy_behaviour

```
$ make all
gcc strncpy_behaviour.c
./a.out
char s1[10 + 1] = "AAAAAAAAAAA";
s1[00] 65
s1[01] 65
s1[02] 65
s1[03] 65
s1[04] 65
s1[05] 65
s1[06] 65
s1[07] 65
s1[08] 65
s1[09] 65
s1[10] 65

strncpy(s1, "abc",10);
s1[00] 97
s1[01] 98
s1[02] 99
s1[03] 0
s1[04] 0
s1[05] 0
s1[06] 0
s1[07] 0
s1[08] 0
s1[09] 0
s1[10] 65
````