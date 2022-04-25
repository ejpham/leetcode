class Solution:
    def isValid(self, s: str) -> bool:
        pstack = []
        for value in (s):
            if value == '(' or value == '[' or value == '{':
                pstack.append(value)
            else:
                if not pstack or (pstack[-1] == '(' and value != ')') or (pstack[-1] == '[' and value != ']') or (pstack[-1] == '{' and value != '}'):
                    return False
                pstack.pop()
        if pstack:
            return False
        return True
