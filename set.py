def list_to_set_conversion(list1):
    se = set()
    for x in list1:
        se.add(x)
    return se
def addelm_to_set(l):
    for i in range(3):
        x=float(input('donner des valeurs: '))
        l.append(x)
        return l
def ensemblesegaux(l1,l2):
    l1=[]
    l2=[]
    for i in range(3):
        x=float(input('donner des valeurs: '))
        l1.append(x)
    f = {x for x in l1}
    print(f)
    for j in range(3):
        x=float(input('donner des valeurs: '))
        l2.append(x)
    f = {x for x in l2}
    print(f)
    b = False
    for i in range(3):
        for j in range(3):
            if(l1[i]==l2[j]):
                b = True
                break            
    if (b== True):
        print("les ensembles sont egaux")
    else:
        print("les deux ensembles sont differents ")
def inclusion(A,B):
    print("A < B","->", A < B)
    print("A > B","->", A > B)
def intersect_union(s,t):
    s = {1, 2, 3, 4}
    t= {1, 2, 5, 6}
    print(s)
    print(t)
    print()
    print("intersection ->", s & t)
    print("union ->", s | t)
def complementaire(A,B):
    intersection = A & B
    sontDisjoints = True
    if len(intersection) != 0:
        sontDisjoints = False
    print(sontDisjoints)
    
    
    
s=[]
t=[]
ensemblesegaux(s,t)
inclusion(s,t)
intersect_union(s,t)
A={14, 55, 3, 4}
B={1, 2, 1, 2}
complementaire(A,B)

