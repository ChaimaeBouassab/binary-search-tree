
def remplir_expres(l):
    Langue = ''
    trad=''
    dico_in={}
    for j in range(len(l)):
        for i in range(3):
            Langue = input("Veuillez entrer la langue pour afficher traduction de lexpression :  ")
            trad = input("Veuillez entrer  sa traduction en cette langue : ")
        for trad in dico_in.values():
            print("Elle existe deja")
        else:
            dico_in[Langue] = trad
        l.append(dico_in)
        print(l)
    return l

D=[{'English':'Kind','French':'Gentil'},{'English':'good','French':'bien'}]
D=remplir_expres(D)
D=remplir_expres(D)
D=remplir_expres(D)