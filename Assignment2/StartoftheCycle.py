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

def detectCycle(head):
    slow = head
    fast = head

    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next

        if slow == fast:
            slow = head

            while slow != fast:
                slow = slow.next
                fast = fast.next

            return slow

    return None

print("\n----------------------> Find the Start of the Cycle <----------------------\n")

n = int(input("Enter number of nodes: "))
values = list(map(int, input("Enter node values: ").split()))
cycle_pos = int(input("Enter cycle position (-1 for no cycle): "))

head = createList(values, cycle_pos)

print("\n========== Cycle Detection ==========")
print("Input :", values)

if detectCycle(head):
    print("Result: Cycle Detected: ", detectCycle(head).data)
else:
    print("Result: No Cycle")

print("=====================================")