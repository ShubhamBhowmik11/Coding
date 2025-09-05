import java.util.*;
class Pair{
      int node,cost;
      Pair(int node,int cost){
      this.node = node;
      this.cost = cost;
      }
}
public class primsAlgo{
      public static int PrimAlgo(ArrayList<ArrayList<Pair>> graph){
            PriorityQueue<Pair> p = new PriorityQueue<>((a,b)->Integer.compare(a.cost,b.cost));
            boolean vis[] = new boolean[graph.size()];
            p.add(new Pair(0,0));
            int cost=0;
            while(!p.isEmpty()){
                 Pair temp = p.poll();
                 if(vis[temp.node] == true) continue;
                  vis[temp.node] = true;
                  cost += temp.cost;
                  for(int i=0;i<graph.get(temp.node).size();i++){
                       Pair curr = graph.get(temp.node).get(i);
                       if(vis[curr.node] == false){
                        p.add(new Pair(curr.node,curr.cost));
                       }
                  }
            }
            return cost;
      }
      public static void CreateGraph(ArrayList<ArrayList<Pair>> graph,int n){
            for(int i=0;i<n;i++){
                  graph.add(new ArrayList<>());
            }
            graph.get(0).add(new Pair(1,10));
            graph.get(0).add(new Pair(2,15));
            graph.get(0).add(new Pair(3,30));

            graph.get(1).add(new Pair(0,10));
            graph.get(1).add(new Pair(3,40));

            graph.get(2).add(new Pair(0,15));
            graph.get(2).add(new Pair(3,50));

            graph.get(3).add(new Pair(1,40));
            graph.get(3).add(new Pair(2,50));
      }
      public static void main(String args[]){
      int n = 4;
      ArrayList<ArrayList<Pair>> graph = new ArrayList<>();

      CreateGraph(graph ,n);
      System.out.print("Minimum Spaaning tree of graph" + PrimAlgo(graph));
      }
}