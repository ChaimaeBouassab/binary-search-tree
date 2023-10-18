'''L2=["Janvier","Février","Mars","Avril", "Mai","Juin","Juillet","Août","Septembre","Octobre", "Novembre","Décembre"]
L1 = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
p=[]
for i in range(len(L2)):
  for i in range(len(L1)):
   p.append(L2[i])
   p.append(L1[i])
print(p[i])'''


'''Tri insertion'''
def trier(liste):
    for index in range(len(liste)):  
        item = liste[index]       
        j = index
        while j>0 and liste[j-1] > item: 
            liste[j] = liste[j-1]        
            j=j-1
        liste[j]=item    


L1 = [31, 40, 7, 10, 1]
trier(L1)
print(L1)


