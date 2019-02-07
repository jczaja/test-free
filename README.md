1.  mkdir build; cd build; cmake ../ -DCMAKE_BUILD_TYPE=Debug; make
2. gdb -ex s ./test-free
     (gdb) break __libc_free
     (gdb) c
     ...
