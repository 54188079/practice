////�����ڽӾ����ʾ����������ͼ
//#include<iostream>
//typedef char AMGraph;
//#define MVNum 100 //��󶥵���
//#define MaxInt 32765 //��32765��ʾ��
//typedef char VerTexType;//�趥�����������Ϊ�ַ���
//typedef int ArcType;//����ߵ�Ȩֵ����Ϊ����
//typedef struct
//{
//    VerTexType vexs[MVNum];//�����
//    ArcType arcs[MVNum][MVNum];//�ڽӾ���
//    int vexnum, arcnum;//ͼ	�ĵ�ǰ�����ͱ���
//}AMGraph;
//using namespace std;
//void CreateUDN(AMGraph& G)
//{
//	int i,j,k,w;
//	cin >> G.vexnum >> G.arcnum;//���붥�����ͱ���
//	for (i=0;i<G.arcnum;++i )//���붥����Ϣ�����������
//	{
//		cin >> G.vexs[i];
//	}
//	for (i = 0; i < G.vexnum; ++i)
//		for (j = 0; j < G.vexnum; ++j)
//			G.arcs[i][j] = MaxInt;//�ڽӾ����ʼ��
//	for (k = 0; k < G.arcnum; ++k)//����ߵ���Ϣ�������ڽӾ���
//	{
//		cin >> i >> j >> w;
//		G.arcs[i][j] = w;
//		G.arcs[i][j] = G.arcs[i][j];//����ͼ������Գ�
//	}
//}