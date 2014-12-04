// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client_interface.djinni

#import "DBClientInterfaceObjcProxy+Private.h"
#import "DBClientInterface.h"
#import "DBClientReturnedRecord+Private.h"

namespace djinni_generated
{
    ClientInterfaceObjcProxy::ClientInterfaceObjcProxy (id objcRef)
    {
        assert([[objcRef class] conformsToProtocol:@protocol(DBClientInterface)]);
        this->objcRef = objcRef;
    }

    ClientInterfaceObjcProxy::~ClientInterfaceObjcProxy ()
    {
        djinni::DbxObjcWrapperCache<ClientInterfaceObjcProxy> & cache = djinni::DbxObjcWrapperCache<ClientInterfaceObjcProxy>::getInstance();
        cache.remove(objcRef);
    }

    std::shared_ptr<ClientInterface> ClientInterfaceObjcProxy::client_interface_with_objc (id objcRef)
    {
        djinni::DbxObjcWrapperCache<ClientInterfaceObjcProxy> & cache = djinni::DbxObjcWrapperCache<ClientInterfaceObjcProxy>::getInstance();
        return static_cast<std::shared_ptr<ClientInterface>>(cache.get(objcRef));
    }

    ::djinni::cpp::ClientReturnedRecord ClientInterfaceObjcProxy::get_record (int64_t record_id, const std::string & utf8string)
    {
        @autoreleasepool {
            int64_t cpp_record_id = record_id;
            NSString *cpp_utf8string = [[NSString alloc] initWithBytes:utf8string.data()
                    length:utf8string.length()
                    encoding:NSUTF8StringEncoding];
            DBClientReturnedRecord *objcRet = [objcRef getRecord:cpp_record_id utf8string:cpp_utf8string];
            ClientReturnedRecord cppRet = std::move([objcRet cppClientReturnedRecord]);
            return cppRet;
        }
    }
}
