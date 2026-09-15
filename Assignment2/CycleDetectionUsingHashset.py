class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


def createList(values, cycle_pos):
    nodes = [Node(value) for value in values]

    for i in range(len(nodes) - 1):
        nodes[i].next = nodes[i + 1]

    if cycle_pos >= 0:
        nodes[-1].next = nodes[cycle_pos]

    return nodes[0]

def hashCycle(head):
    visited = set()

    while head:
        if head in visited:
            return True

        visited.add(head)
        head = head.next

    return False


print("\n----------------------> Cycle Detection Using HashSet <----------------------\n")

n = int(input("Enter number of nodes: "))
values = list(map(int, input("Enter node values: ").split()))
cycle_pos = int(input("Enter cycle position (-1 for no cycle): "))

head = createList(values, cycle_pos)

print("\n========== Cycle Detection ==========")
print("Input :", values)

if hashCycle(head):
    print("Result: Cycle Detected")
else:
    print("Result: No Cycle")

print("=====================================")