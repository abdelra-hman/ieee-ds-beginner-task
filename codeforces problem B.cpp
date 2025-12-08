 #include <iostream>

int main()
{
    string s;
    cin >> s;
    string target = "hello";
    int index = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == target[index])
        {
            index++;
        }
        if (index == target.size())
        {
            cout << "YES" << endl;
            return 0;

        }
    }  
        cout << "NO" << endl;    
}