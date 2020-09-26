#pragma once 

class Simple{
    private:
        int num_people{0};

    public:
        Simple(int x);
        void incr_people();
        void print();
};
