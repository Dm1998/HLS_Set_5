#include <iostream>
#include "ac_int.h"
//#include "ms_scverify"
#include "m_color_graph.h"



//static const int N=6;

int main()
{

	bool adj[N][N]={0,1,0,0,0,1  ,1,0,1,0,0,1  ,0,1,0,1,0,0  ,0,0,1,0,1,0  ,1,0,0,1,0,1  ,1,1,0,0,1,0};

	ac_int<N,false> V_color[N];
	short unsigned int minimum=0;

	ColorGraph A;

	A.graph_color(adj,V_color,minimum);

	std::cout<<"Min number of  colours: "<< minimum<<std::endl;

	for(int i=0;i<N;i++)
	std::cout<<"Color of."<<i+1<<" is "<<V_color[i]<<std::endl;




	return 0;
}

