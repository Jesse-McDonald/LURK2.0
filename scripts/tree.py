#Returns the paths of all files in a directory and all sub directories relative to start directory
import os
def tree(directory,target="f"):
	paths=[]
	for currentDir,dirs,files in os.walk(directory):
		if target=="f":
			for file in files:
				paths.append(currentDir+"/"+file)
		if target=="d":
			#paths.append(currentDir)
			for dir in dirs:
				paths.append(currentDir+"/"+dir)
	for i in range(len(paths)):
		paths[i]=paths[i].replace("\\","/")
	return paths




