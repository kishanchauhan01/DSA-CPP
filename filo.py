import os 

if not os.path.exists("patten"):
    os.mkdir("patten")

for i in range(15, 20):
    file = open(f'patten/{i}.cpp', 'x')
    file.close()

