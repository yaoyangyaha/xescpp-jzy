//BFS模板
/*
思考起点终点
结构体队列，vis数组，方向数组 
1.将起点放到队列中，标记起点的vis 
2.while循环队列非空
3.每次取出队头，判断是否为终点 是：统计答案并输出  break 不是：思考能走到哪里 
4. 思考当前点能走到哪里，根据方向数组循环当前点能走到哪里
5.判断新点（1）  有没有超出边界（2）  有没有被访问过（3）题目限制
6.标记该点vis，加入队列
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

