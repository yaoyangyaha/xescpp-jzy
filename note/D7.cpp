//BFSģ��
/*
˼������յ�
�ṹ����У�vis���飬�������� 
1.�����ŵ������У��������vis 
2.whileѭ�����зǿ�
3.ÿ��ȡ����ͷ���ж��Ƿ�Ϊ�յ� �ǣ�ͳ�ƴ𰸲����  break ���ǣ�˼�����ߵ����� 
4. ˼����ǰ�����ߵ�������ݷ�������ѭ����ǰ�����ߵ�����
5.�ж��µ㣨1��  ��û�г����߽磨2��  ��û�б����ʹ���3����Ŀ����
6.��Ǹõ�vis���������
*/

int dx[4]={-1,1,0,0}; 
int dy[4]={0,0,1,-1};

int dx[] = {0,0,1,-1,1,1,-1,-1};
int dy[] = {1,-1,0,0,1,-1,1,-1};


queue<node> q;
q.push({sx,sy,0});
vis[sx][sy]=1;
while(!q.empty()){
	int x=q.front().x;
	int y=q.front().y;
	int step=q.front().step;
	q.pop();
	if(x==ex&&y==ey){
		cout << step;
		break; 
	}
	for(int i=0;i<=3;i++){
		int xx=x+dx[i];
		int yy=y+dy[i];
		if(xx>=1&&xx<=n&&yy>=1&&yy<=n&&!vis[xx][yy]&&...){
			vis[xx][yy]=1;
			q.push({xx,yy,step+1});
		}
	}
}

