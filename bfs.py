start = input("start node : ")
goal = input("goal node : ")

graph = {
    'A' : ['B','C'],
    'B' : ['A','D','E'],
    'C' : ['A','F'],
    'D' : ['B'],
    'E' : ['B','F'],
    'F' : ['C','E']
}
visited = []
queue = []

def bfs(visited,graph,node):
    visited.append(node)
    queue.append(node)
    while queue!=[]:
        s = queue.pop(0)
        print(s,end="   ")

        for n in graph[s]:
            if n not in visited and goal not in visited:
                visited.append(n)
                queue.append(n)

bfs(visited,graph,start) #calling
