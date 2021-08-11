# Given graph is acyclic and directed graph


# Depth First Search
# def hasPath(graph, src, dst):
#     if(src == dst):
#         return True
#     for neighbor in graph[src]:
#         if(hasPath(graph, neighbor, dst) == True):
#             return True
#     return False


# Breadth First Search
def hasPath(graph, src, dst):
    queue = [src]
    
    while(len(queue) > 0):
        current = queue.pop(0)
        if(current == dst):
            return True
        for neighbor in graph[current]:
            queue.append(neighbor)
    return False



graph = {
    'f': ['g', 'i'],
    'g': ['h'],
    'h': [],
    'i': ['g', 'k'],
    'j': ['i'],
    'k': []
}

print(hasPath(graph, 'f', 'k'))
print(hasPath(graph, 'f', 'j'))

'''
if n = no. of nodes and e = no.of edges then, 
Time complexity: O(e)
Space complexity: O(n)

if n = no.of nodes then, 
Time Complexity: O(n^2)
Space Complexity: O(n)
'''