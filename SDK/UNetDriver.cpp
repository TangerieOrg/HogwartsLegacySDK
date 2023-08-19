#include "FChannelDefinition.hpp"
#include "UChannel.hpp"
#include "UClass.hpp"
#include "UNetConnection.hpp"
#include "UNetDriver.hpp"
#include "UObject.hpp"
#include "UPackage.hpp"
#include "UReplicationDriver.hpp"
#include "UWorld.hpp"
UNetDriver* UNetDriver::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.NetDriver");
    return (UNetDriver*)res;
}
