#include "EUdpMessageFormat.hpp"
#include "UObject.hpp"
#include "UUdpMessagingSettings.hpp"
UUdpMessagingSettings* UUdpMessagingSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/UdpMessaging.UdpMessagingSettings");
    return (UUdpMessagingSettings*)res;
}
