#week10-1.py 函式呼叫函式 
N = int(input('請輸入N:'))
# 以前是用 for迴圈寫， 今天用 函式呼叫函式
def func(n):
  if n==1: return 1
  return n * func(n-1)
ans = func(N)
print(ans)