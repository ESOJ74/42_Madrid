import os
import time

for i in range(0, 50000):
	os.system("./rush-02 " + str(i))
	time.sleep(0.1)
