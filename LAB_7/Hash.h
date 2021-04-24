//---------------------------------------------------------------------------

#ifndef HashH
#define HashH
#include <vector>
//---------------------------------------------------------------------------
class HashTable{
public:
		const int m = 1e5 + 3;
		std::vector<std::pair<String,int>> v[100003];
		int GetHash(String st){
		 int sum = 0;
		 for (int i = 1; i <= st.Length(); i++)
			{
				sum += st[i] - '0' ;
			}
			return sum % m;
		}

		void Add(String st, int key){
		int h = GetHash(st);
		v[h].push_back({st, key});
		}

		void Delete(String s){
		int h = GetHash(s);
		for (int i = 0; i < v[h].size(); i++)
			{
				if (v[h][i].first == s)
				{
					v[h].pop_back();
					return;
				}
			}

		}

		int Get(String st){
			int h = GetHash(st);
			for (int i = 0; i < v[h].size(); i++)
			{
				if (v[h][i].first == st)
				{
					return v[h][i].second;
				}
			}
			return 0;
		}

		String GetByKey(int key){
			for (int i = 0; i < m; i++)
				{
					if (v[i].size() > 0)
					{
						for (int j = 0; j < v[i].size(); j++)
						{
							if (v[i][j].second == key)
							{
								return v[i][j].first;
							}
						}
					}
				}


		}

};

#endif
