import sys
l=[line for line in sys.stdin]
i=1
#print int(l[0])-1
text_file = open("p12.txt", "w")
for _ in range(int(l[0])):
    l[i] = l[i].strip('\n')
    s=l[i].split(" ")
    #print s
    f=""
    for j in range(len(s)-1,-1,-1):
        f+=s[j]+" "
    text_file.write("Case #%d: %s\n"%(i,f) )
    #print( "Case #%d: %s"%(i,f))
    i+=1
text_file.close()
    
    
       
