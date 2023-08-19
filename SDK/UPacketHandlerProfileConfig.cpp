#include "UObject.hpp"
#include "UPacketHandlerProfileConfig.hpp"
UPacketHandlerProfileConfig* UPacketHandlerProfileConfig::StaticClass() {
    static auto res = find_uobject("Class /Script/PacketHandler.PacketHandlerProfileConfig");
    return (UPacketHandlerProfileConfig*)res;
}
