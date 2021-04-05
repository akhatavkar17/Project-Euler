sum=0
i=0
x=1
y=1
while i < 4000000:
  i=x+y
  if (i%2==0):
    sum=sum+i
  x=y
  y=i
print "Sum : ", sum
