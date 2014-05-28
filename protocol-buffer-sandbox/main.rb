require './address.pb'

include Tutorial

address_book = Tutorial::AddressBook.new

address_book.parse_from_file '/Users/mcorrea/iCreate/proto-buffers/code/ab.bin'

puts address_book