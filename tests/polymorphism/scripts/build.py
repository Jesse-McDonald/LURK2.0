build="g++"
options="-lGL -lGLU -lglut -lm -pthread -w -std=c++11 -g"
Name="game"
from subprocess import call
from tree import tree 
import os
#call([build,"main.cpp",options,"-o "+name])
cwd = os.getcwd()
files=tree(cwd+"/src")
include=tree(cwd+"/headers","d")
buildScript=""
linking=""
headerChange=False

for i in range(len(include)):	
	if not(os.path.exists(Name) and os.path.getmtime(include[i])<os.path.getmtime(Name)):
		headerChange=True
	buildScript+="mkdir -p "+"\""+include[i].replace("/headers","/build")+"\""+'\n'
	include[i]="-I"+"\""+include[i]+"\""
for item in files:
	name=item
	name=name.replace("/src","/build")
	name=name.replace(".cpp",".o");
	if headerChange or not(os.path.exists(name) and os.path.getmtime(item)<os.path.getmtime(name)):
		buildScript+=(" ".join([build,"-c","\""+item+"\"",options]+include+["-o "+"\""+name+"\""]))+'\n'
	
	linking+="\""+name+"\" "
buildFile=open(cwd+"/scripts/build",'w');
buildFile.write(buildScript)
buildFile.write(build+" "+linking+options+" -o "+Name+'\n')
buildFile.close()
