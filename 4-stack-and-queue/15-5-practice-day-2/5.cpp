
string kevinStackProblem(string &s)
{
  stack st;

  for (int i = 0; i < s.length(); i++)
  {
    st.push(s[i]);
  }

  string ans = "";

  // Remove all characters from the stack and appends in the answer string.
  while (!st.empty())
  {
    char x = st.top();
    ans.push_back(x);
    st.pop();
  }

  // Return the ans string.
  return ans;
}

// https://www.codingninjas.com/studio/problems/kevin-s-stack-problem_1169465?leftPanelTab=1