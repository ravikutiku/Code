import pip
import sys
import json

check =True

filename= sys.argv[1] #add filename
if filename:
  with open(filename, 'r') as f:
    datastore = json.load(f)

list = datastore['Dependencies ']

try:
 for p in list:
   pip.main(['install',p])
except:
  print(p)
  check = False
  pass

if check:
 print("Success")  