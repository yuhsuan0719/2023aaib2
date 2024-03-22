# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        a = [] #先把a設程很小
        while head != None:
            a.append(head.val)
            head = head.next
        print(a)
        N = len(a)
        for i in range(len(a)):
            if a[i] != a[N-1-i]: return False
        return True