
# create stack
def creat_stack():
    stack = []
    return stack

# check if stack is empty
def check_empty(stack):
    if len(stack) == 0:
        return len(stack)

# push to stack
def push(stack, item):
    stack.append(item)
    print("pushed item: " , item)

# pop from stack
def pop(stack):
    if check_empty(stack):
        return "stack empty"
    return stack.pop()

# operations
stack = creat_stack()
push(stack, 1)
push(stack, 2)
print("popped item: ", pop(stack))
print("stack after popping: ", stack)
