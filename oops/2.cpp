    #include <bits/stdc++.h>
    using namespace std;
    class Hero{
        private:
            int level=1,health;

        public:


        //parametrised constructor
        Hero(int health){
            this->health=health;
        }
        Hero(int health,int level){
            this->health=health;
            this->level=level;
        }

        void print(){
            cout<<"\nthe health\t"<<health;
            cout<<"\nthe level\t"<<level;
        }

        int getHealth(){
            return health;
        }
        
        int getlevel(){
            return level;
        }


        void SetHealth(int h){
            health =h;
        }

        void SetLevel(int l){
            level =l;
        }
        




    };



    int main()
    {
        Hero S(70);
        S.print();
        S.SetLevel(90);
        S.print();
        
        
        
        Hero M(100,6);
        M.print();
        M.SetLevel(90);
        M.print();



        return 0;
    }