#include<iostream>
#include<string.h>
#include<list>
#include<vector>
using namespace std;

struct Client {
    string name;
    string telephone;
};

class HashTableSeperateChaining {
    int tableSize;
    vector<list<Client>> table;
    public:
        HashTableSeperateChaining(int size): tableSize(size), table(size){}
        int hashFunction(const string & telephone) {
            int hash = 0;
            for (char ch : telephone)
            {
                hash = (hash * 31 + ch) % tableSize;
            }
            return hash;
        }

        void insert(const Client & client) {
            int idx = hashFunction(client.telephone);
            table[idx].push_back(client);
        }

        string search(const string & telephone) {
            int idx = hashFunction(telephone);
            for (const Client & client : table[idx])
            {
                if (client.telephone == telephone)
                {
                    return client.name;
                }
                
            }
            return "Not found !";
        }
};

class HashTableLinearProbing {
    int tableSize;
    vector<Client> table;
    public:
        HashTableLinearProbing(int size): tableSize(size), table(size){}
        int hashFunction(const string & telephone) {
            int hash = 0;
            for (char ch : telephone)
            {
                hash = (hash * 31 + ch) % tableSize;
            }
            return hash;
        }

        void insert(const Client & client) {
            int idx = hashFunction(client.telephone);
            while (!table[idx].telephone.empty())
            {
                idx = (idx + 1) % tableSize;
            }
            table[idx] = client;
        }

        string search(const string & telephone) {
            int idx = hashFunction(telephone);
            while (!table[idx].telephone.empty())
            {
                if (table[idx].telephone == telephone)
                {
                    return table[idx].name;
                }
                
            }
            
            return "Not found !";
        }
};

int main(){
    Client c1 = {"vishal wadgaonkar","782-206-8186"};
    Client c2 = {"sarvesh mulay","882-317-9101"};
    Client c3 = {"Adity More","999-111-3333"};
    HashTableLinearProbing htl(100);
    HashTableSeperateChaining hts(100);
    htl.insert(c1);
    htl.insert(c2);
    htl.insert(c3);
    cout<<htl.search(c2.telephone)<<endl;
    cout<<htl.search(c3.telephone);
    return 0;
}