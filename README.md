1.  mkdir build; cd build; cmake ../ -DCMAKE_BUILD_TYPE=Debug; make
2. gdb -ex start ./test-free <BR>
     (gdb) break __libc_free <BR>
     (gdb) c  <BR>
     ...
