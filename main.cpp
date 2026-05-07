#include <iostream>

using namespace std;

class NetObject
{
    public:
    int i, j; //Position
    int idx; //Index
    int w; //Weight
    NetObject(int a, int b, int wt, int index) {
        //Constructor
        i = a; //X position
        j = b; //Y position
        w = wt; //Weight
        idx = index; //Index
    }
    ~NetObject() {
        //Destructor
    }
    void move(int i_new, int j_new) {
        //Move object
        i = i_new;
        j = j_new;
    }
    void print() {
        //Print object
        cout << i, j, idx, w;
    }
    int gw() {
        //Get weight
        return w;
    }
    void sw(int w_new) {
        //Set weight
        w = w_new;
    }
    int gx() {
        //Get x position
        return i;
    }
    int gy() {
        //Get y position
        return j;
    }
    int gi() {
        //Get index
        return idx;
    }
    void si(int idx_new) {
        //Set index
        idx = idx_new;
    }
};

class Node: NetObject
{
    ///***Needs an internal edge list***///
    //Getter and setter
    ///***Needs an internal particle list***///
    //Getter and setter
    ///***Constructor***///
    ///***Destructor***///
};

class Edge: NetObject
{
    int un, ln; //Upper node and lower node
    Edge(int a, int b, int wt, int index): NetObject(a, b, wt, index) {
        //Constructor
        un = a; //Upper node
        ln = b; //Lower node
        w = wt; //Weight
        idx = index; //Index
    }
    ~Edge() {
        //Destructor
    }
};

class Particle: NetObject
{
    int no; //Node occupying
    ///***Constructor***///
    ///***Destructor***///
};

class DesignNetwork
{
    int N = 0; //Number of nodes
    int M = 0; //Number of edges
    int p = 0; //Number of particles

    Node* Nodes;
    Edge* Edges;
    Particle* particles;

    void init()
    {
        cout << "Run!!!" << endl;
    }
};

int main()
{
    cout << "Hello Network!" << endl;

    return 0;
}
