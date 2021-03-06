### Generated by rprotoc. DO NOT EDIT!
### <proto file: address.proto>
# package tutorial;
# 
# option java_package = "me.manny.protobuff.tutorial";
# option java_outer_classname = "AddressBookProto";
# 
# message Person {
# 	required string name = 1;
# 	required int32 id = 2; 
# 	optional string email = 3;
# 
# 	enum PhoneType{
# 		MOBILE = 0;
# 		HOME = 1;
# 		WORK = 3;
# 	}
# 
# 	message PhoneNumber{
# 		required string number = 1;
# 		optional PhoneType type = 2 [default = HOME];
# 	}
# 
# 	repeated PhoneNumber phone = 4; 
# 	optional string company = 5;
# }
# 
# message AddressBook{
# 	repeated Person person = 1;
# }
require 'protobuf/message/message'
require 'protobuf/message/enum'
require 'protobuf/message/service'
require 'protobuf/message/extend'

module Tutorial
  ::Protobuf::OPTIONS[:"java_package"] = "me.manny.protobuff.tutorial"
  ::Protobuf::OPTIONS[:"java_outer_classname"] = "AddressBookProto"
  class Person < ::Protobuf::Message
    defined_in __FILE__
    required :string, :name, 1
    required :int32, :id, 2
    optional :string, :email, 3
    class PhoneType < ::Protobuf::Enum
      defined_in __FILE__
      MOBILE = value(:MOBILE, 0)
      HOME = value(:HOME, 1)
      WORK = value(:WORK, 3)
    end
    class PhoneNumber < ::Protobuf::Message
      defined_in __FILE__
      required :string, :number, 1
      optional :PhoneType, :type, 2, :default => :HOME
    end
    repeated :PhoneNumber, :phone, 4
    optional :string, :company, 5
  end
  class AddressBook < ::Protobuf::Message
    defined_in __FILE__
    repeated :Person, :person, 1
  end
end