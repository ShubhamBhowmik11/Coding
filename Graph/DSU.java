
public class DSU
{
    int Parent(int i,int par){
        if(i == par[i]) return i;
        return par[i] = Parent(par[i],par); // path compression - optimisation those by this we are directly attaching the node to its parent and thus reducing the height of tree and thus reduce the time complexity of find function
    }
    void Union(int x,int y,int []par,int rank){
        int x_parent = Parent(x,par);
        int y_parent = Parent(y,par);
        if(x_parent == y_parent) return;
         
        if(rank[x_parent] > rank[y_parent])// union by rank optimisation  by this we are attaching smaller tree to bigger tree and this will reduce the height of tree and thus reduce the time complexity of find function
        par[y_parent] = x_parent;
        else if(rank[x_parent] < rank[y_parent])//
        par[x_parent] = y_parent;
        else
        {
            par[y_parent] = x_parent;
            rank[x_parent]++;
        }
        
    }
	public static void main(String[] args) {
        int n = 5;
        int par[] = new int[n];
        int rank[] = new int[n];
        for(int i=0;i<n;i++){
            par[i] = i;
            rank[i] = 0;
        }
        DSU dsu = new DSU();
        dsu.Union(0,1,par,rank);
        dsu.Union(1,2,par,rank);
        dsu.Union(3,4,par,rank);
        
        for(int i=0;i<n;i++){
            System.out.print(dsu.Parent(i,par) + " ");
        }
	
	}
}
