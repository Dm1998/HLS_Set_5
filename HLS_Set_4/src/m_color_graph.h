#ifndef M_COLOR_GRAPH_H
#define M_COLOR_GRAPH_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ac_int.h"
//#include "mc_scverify.h"

static const int N=6;

//#pragma hls_design top
class ColorGraph{

private:
public:

ColorGraph(){};

//#pragma hls_design interface
void graph_color( bool adj_G[N][N] , ac_int<N,false> V_color[N] , short unsigned int &min_colors)
{
        short unsigned int  min_color=1; 
	ac_int<N,false>		colors[N];

        for (int i=0;i<N;i++)
	{
                        colors[i]=1;

                	for(int j=0;j<N;j++)
                        {

                                if( adj_G[i][j]==1 && colors[i]==colors[j] ) colors[i]+=1;
			}
               		if(colors[i]>min_color) min_color=colors[i];
			//std::cout<<min_color;
               		V_color[i]=colors[i];
        }

}//function

};


#endif
