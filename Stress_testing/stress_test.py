#input format:
#   3
#   1 2 3

import random
import os
import time
import threading

file_name = "pairwise_max_product.cpp"
time_limit = 0.5
test_case = 1000


n = -1
a = []

def output_solution():
    #generating output 1
    os.system(f"g++ {file_name} -o solution")

def output_bruteforce():
    #generating bruteforce output
    os.system("g++ brute_force.cpp -o bruteforce")

t1 = threading.Thread(target = output_solution,args = ());
t2 = threading.Thread(target = output_bruteforce,args = ());
t1.start()
t2.start()
t1.join()
t2.join()

for _ in range(test_case):
    n = -1
    a = []
    with open("input.txt","w") as input_file:
        n = random.randint(2,1000)
        input_file.write(f"{n}\n")
        for i in range(n): 
            a.append(random.randint(0,1000000000))
            input_file.write(f"{a[-1]} ")
        input_file.write("\n")
    print(n,a)
    
    # start_time = time.time()
    os.system("./solution < input.txt > solution_output.txt")
    # end_time = time.time()
    # if(end_time - start_time > time_limit):
    #     print("TLE")
    #     break
    
    # start_time = time.time()
    os.system("./bruteforce < input.txt > bruteforce_output.txt")
    # end_time = time.time()
    # if(end_time - start_time > time_limit):
    #     print("TLE")
    #     break
    
    if(os.system("diff solution_output.txt bruteforce_output.txt")==0):
        print("OK")
    else:
        print("Error")
        break
