#include<iostream>
#include<stack>
#include<string>

using namespace std;
bool ArePair(char opening, char closing)
{
  if (opening == '(' && closing == ')') return true;
  else if (opening == '[' && closing == ']') return true;
  else if (opening == '{' && closing == '}') return true;
  else
    return false;
}

bool AreParenthesesBalanced(string exp)
{
  stack<char> s;
  for (int i=0; i<exp.length();i++)
  {
    if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
    {
      s.push(exp[i]);
    }
    else if (exp[i] == ')' || exp[i] == ']' || exp[i] == '}')
    {
      if (s.empty() || !ArePair(s.top(),exp[i]))
      {
        return false;
      }
      else
      {
        s.pop();
      }
    }
  }
  return s.empty() ? true:false;
}

int main()
{
  string expression;
  cout << "Enter an expression: ";
  cin >> expression;

  if (AreParenthesesBalanced(expression))
    cout << "Balanced" << endl;
  else
    cout << "Not Balanced" << endl;
}


