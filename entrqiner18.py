class Point:
      def __init__(self,a,b):
          self.abs=a
          self.ord=b
      def deplacer(self,dx,dy):
          self.abs=self.abs+dx
          self.ord=self.ord+dy
      def afficher(self):
          print("abscisse", self.a ,"ordonnee", self.b)

a=Point(3 , -1)
a.afficher()
a.deplacer(2 , 5)
a.afficher()
