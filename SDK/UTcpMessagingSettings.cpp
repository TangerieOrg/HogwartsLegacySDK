#include "UObject.hpp"
#include "UTcpMessagingSettings.hpp"
UTcpMessagingSettings* UTcpMessagingSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/TcpMessaging.TcpMessagingSettings");
    return (UTcpMessagingSettings*)res;
}
