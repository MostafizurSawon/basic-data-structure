// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     string val;
//     Node *next;
//     Node *prev;
//     Node(string val)
//     {
//         this->val = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

// void insert_tail(Node *&head, Node *&tail, string val)
// {
//     Node *newNode = new Node(val);
//     if (tail == NULL)
//     {
//         head = newNode;
//         tail = newNode;
//         return;
//     }
//     tail->next = newNode;
//     newNode->prev = tail;
//     tail = tail->next;
// }

// int sz(Node *head)
// {
//   int cnt=0;
//   Node *tmp=head;
//   while(tmp!=NULL)
//   {
//     cnt++;
//     tmp=tmp->next;
//   }
//   return cnt;
// }

// int main()
// {
//     Node *head = NULL;
//     Node *tail = NULL;
//     string val;
//     while (true)
//     {
//         cin >> val;
//         if (val == "end") break;
//         insert_tail(head, tail, val);
//     }

//     int size=sz(head);
//     int n; cin >> n;
//     Node* tmp=head;
//     Node* tmp2=head;

//     while (n--)
//     {
//       string in;
//       cin >> in;
//       if(in=="visit")
//       {
//         string str;
//         cin >> str;
//         int flag=0;
//         tmp=head;
//         for(int i=0; i<size; i++)
//         {
//           if(tmp->val==str)
//           {
//             flag=1;
//             break;
//           }
//           tmp=tmp->next;
//         }
//         if(flag==0)
//         {
//           cout<<"Not Available"<<endl;
//           tmp=tmp2;
//         }
//         else cout<<str<<endl;
//       }

//       else if(in=="next")
//       {
//         if(tmp->next!=NULL)
//         {
//           cout<<tmp->next->val<<endl;
//           tmp=tmp->next;
//         }
//         else cout<<"Not Available"<<endl;
//       }

//       else if(in=="prev")
//       {
//         if(tmp->prev!=NULL)
//         {
//           cout<<tmp->prev->val<<endl;
//           tmp=tmp->prev;
//         }
//         else cout<<"Not Available"<<endl;
//       }
//       tmp2=tmp;
//     }
    
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main()
{
  list<string>myList;
  string v;

  while(true)
  {
    cin >> v;
    if(v!="end")
    {
        myList.push_back(v);
    }
    else
    {
        break;
    }
  }

  int sz=myList.size();
  int n; cin >> n;
  int cnt=0;
  while(n--)
  {
    string in;
    cin >> in;
    if(in=="visit")
    {
      string str;
      cin >> str;
      auto it2 = find(myList.begin(), myList.end(), str);
      if (it2 == myList.end())
      {
        cout << "Not Available" << endl;
      }
      else
      {
        cnt=0;
        cout << *it2 <<endl;
        for (auto it = myList.begin(); it != myList.end();it++)
        {
            if(*it==str) break;
            else cnt++;
        }
      }
    }
    else
    {
        if(in=="next")
        {
          cnt++;
          if(cnt>=0 && cnt<sz)
          { 
            cout<<*next(myList.begin(),cnt)<<endl;
            // cout<<cnt<<endl;
          }
          else
          {
            // cout<<cnt<<endl;
            cout<<"Not Available"<<endl;
            cnt=sz-1;
            // cout<<cnt<<endl;
          }
        }
        else if(in=="prev")
        {
          cnt--;
          if(cnt>=0 && cnt<sz)
          {
            cout<<*next(myList.begin(),cnt)<<endl;
            // cout<<cnt<<endl;
          }
          else
          {
            // cout<<cnt<<endl;
            cout<<"Not Available"<<endl;
            cnt=0;
            // cout<<cnt<<endl;
          }
        }
    }
  }

  return 0;
}

