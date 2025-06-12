#include <iostream>

using namespace std;

class NetObject
{
    int i, j; //Position
    int idx; //Index
    int w; //Weight
    ///***Move object***///
    ///***Delete object***///
    ///***Print object***///
    ///***Check weight***///
};

class Node: NetObject
{
    ///***Needs an internal edge list***///
    ///***Needs an internal particle list***///
};

class Edge: NetObject
{
};

class Particle: NetObject
{
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
