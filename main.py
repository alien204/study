import pprint
message ='cac bb'
count = 0
for i in message: 
    count.setdefault(i, 0) 
    count[i] =count[i] +1 
pprint.pprint(count)