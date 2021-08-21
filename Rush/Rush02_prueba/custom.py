import os
import time

for i in range(0, 50000):
	os.system("./rush-02 numbers_with_custom.dict " + str(i))
	time.sleep(0.1)
