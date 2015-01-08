#include<stdio.h>
#include<string.h>
#include<stack>

using namespace std;

void Reverse(char* c, int length)
{
  int i;
  stack<char> S;
  for(i=0;i<length;i++)
  {
    S.push(c[i]);
  }
  for(i=0;i<length;i++)
  {
    c[i]= S.top();
    S.pop();
  }
}

int main(void)
{
  char c[51];
  printf("enter a string\n");
  scanf("%s",c);
  Reverse(c, strlen(c));
  printf("Output = %s\n", c);

}
