#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <iostream>
#include <vector>
#include <memory>


class myobject 
{
    int x;
public:
    myobject(int initial) : x(initial)
    {}
};

int main()
{
  std::cout << "Hello Free detector Worlds!" << std::endl;

  char *x = (char*)malloc(10 * sizeof(char*));

  std::unique_ptr<myobject> obj_unique(new myobject(4)); 

  auto obj = new myobject(4);

  free(x);

  delete obj;


  return x[5];

}
