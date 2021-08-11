# Undirected Path --> Undirected graph, given edge list

def undirectedPath(edges, src, dst):
    
    graph = buildGraph(edges)#helper function
    # print(graph)
    return hasPath(graph, src, dst, set())

# Depth first search --> recursive
def hasPath(graph, src, dst, visited):
    if(src == dst):
        return True
    # Line 14-15 prevents the node that we visited before
    if(src in visited):
        return False
    # Adds new node into set
    visited.add(src)
    for neighbor in graph[src]:
        if(hasPath(graph, neighbor, dst, visited) == True):
            return True
    return False 

# Connverts edge list into adjaceny list
def buildGraph(edges):
    graph = dict()
    for edge in edges:
        [a, b] = edge
        if(a not in graph):
            graph[a] = []
        if(b not in graph):
            graph[b] = []
        graph[a].append(b)
        graph[b].append(a)

    return graph
edges = [
    ['i', 'j'],
    ['k', 'i'],
    ['m', 'k'],
    ['k', 'l'],
    ['o', 'n']
]

print(undirectedPath(edges, 'j', 'm'))
print(undirectedPath(edges, 'j', 'o'))

