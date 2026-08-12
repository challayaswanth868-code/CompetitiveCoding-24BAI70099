class MyStack(object):

    def __init__(self):
        self.q1 = []
        self.q2 = []

    def push(self, x):
        """
        :type x: int
        :rtype: None
        """
        # Insert into q2
        self.q2.append(x)

        # Move all elements from q1 to q2
        while len(self.q1) != 0:
            self.q2.append(self.q1.pop(0))

        # Swap queues
        self.q1, self.q2 = self.q2, self.q1

    def pop(self):
        """
        :rtype: int
        """
        return self.q1.pop(0)

    def top(self):
        """
        :rtype: int
        """
        return self.q1[0]

    def empty(self):
        """
        :rtype: bool
        """
        return len(self.q1) == 0

    def display(self):
        print(self.q1)


# Your MyStack object will be instantiated and called as such:
obj = MyStack()

print(["MyStack", "push", "push", "push", "push", "top", "pop", "empty"])

obj.push(2)
obj.push(43)
obj.push(24)
obj.push(56)

obj.display()

param_2 = obj.top()
param_3 = obj.pop()
param_4 = obj.empty()

obj.display()

print(None, None, None, None, param_2, param_3, param_4)