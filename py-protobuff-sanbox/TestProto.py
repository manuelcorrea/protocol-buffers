'''
Created on Apr 2, 2014

@author: mcorrea
'''
import address_pb2

address_book = address_pb2.AddressBook()

file = "/Users/mcorrea/iCreate/proto-buffers/code/ab.bin"
# Read the existing address book.
try:
  f = open(file, "rb")
  address_book.ParseFromString(f.read())
  f.close()
except IOError:
  print file + ": Could not open file.  Creating a new one."

print address_book

if __name__ == '__main__':
    pass