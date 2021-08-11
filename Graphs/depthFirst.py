# Iterative approach
def depthFirst(graph, source):
    stack = [source]
    
    while(len(stack) > 0):
        current  = stack.pop()
        print(current)
        for neighbor in graph[current]:
            stack.append(neighbor)

# Recursive approach
def depthFirst1(graph, source):
    print(source)
    for neighbor in graph[source]:
        depthFirst1(graph, neighbor)

graph = {
    'a': ['c', 'b'],
    'b': ['d'],
    'c': ['e'],
    'd': ['f'],
    'e': [],
    'f': []
}

depthFirst(graph, 'a') #abdfce
print()
depthFirst1(graph, 'a') #acebdf