#include <iostream>

using namespace std;

class NetObject
{
    int i, j; //Position
    int idx; //Index
    int w; //Weight
    NetObject(int a, int b, int wt, int index) {
        //Constructor
        i = a; //X position
        j = b; //Y position
        w = wt; //Weight
        idx = index;
    }
    ~NetObject() {}
    void move(int i_new, int j_new) {
        //Move object
        i = i_new;
        j = j_new;
    }
    ///***Delete object***///
    ///***Print object***///
    int gw() {
        //Get weight
        return w;
    }
    void sw(int wt) {
        //Set weight
        w = wt;
    }
    int gx() {
        //Get x position
        return i;
    }
    int gy() {
        //Get y position
        return j;
    }
    ///***Set position***///
    int gi() {
        //Get index
        return idx;
    }
    ///***Set index***///
};

class Node: NetObject
{
    ///***Needs an internal edge list***///
    ///***Needs an internal particle list***///
    ///***Constructor***///
    ///***Destructor***///
};

class Edge: NetObject
{
    ///***Upper node, lower node***///
    ///***Constructor***///
    ///***Destructor***///
};

class Particle: NetObject
{
    ///***Node Occupying***///
    ///***Constructor***///
    ///***Destructor***///
};

class DesignNetwork
{
    int N = 0; //Number of nodes
    int M = 0; //Number of edges
    int p = 0; //Number of particles
};

int main()
{
    cout << "Hello Network!" << endl;

    return 0;
}
