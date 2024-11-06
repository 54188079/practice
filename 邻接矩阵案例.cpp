////采用邻接矩阵表示法创建无向图
//#include<iostream>
//typedef char AMGraph;
//#define MVNum 100 //最大顶点数
//#define MaxInt 32765 //用32765表示∞
//typedef char VerTexType;//设顶点的数据类型为字符型
//typedef int ArcType;//假设边的权值类型为整型
//typedef struct
//{
//    VerTexType vexs[MVNum];//顶点表
//    ArcType arcs[MVNum][MVNum];//邻接矩阵
//    int vexnum, arcnum;//图	的当前点数和边数
//}AMGraph;
//using namespace std;
//void CreateUDN(AMGraph& G)
//{
//	int i,j,k,w;
//	cin >> G.vexnum >> G.arcnum;//输入顶点数和边数
//	for (i=0;i<G.arcnum;++i )//输入顶点信息，建立顶点表
//	{
//		cin >> G.vexs[i];
//	}
//	for (i = 0; i < G.vexnum; ++i)
//		for (j = 0; j < G.vexnum; ++j)
//			G.arcs[i][j] = MaxInt;//邻接矩阵初始化
//	for (k = 0; k < G.arcnum; ++k)//输入边的信息，建立邻接矩阵
//	{
//		cin >> i >> j >> w;
//		G.arcs[i][j] = w;
//		G.arcs[i][j] = G.arcs[i][j];//无向图，矩阵对称
//	}
//}