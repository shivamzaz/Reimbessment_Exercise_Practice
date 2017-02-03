f=lambda x:sorted([ [l for k,l in enumerate(set(x)) if(i & 1<<k)]for i in range(2**len(set(x)))],key=len,reverse=False)
f([1,2,3,1])