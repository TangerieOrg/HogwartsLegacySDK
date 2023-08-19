#include "AActor.hpp"
#include "FUniqueNetIdRepl.hpp"
#include "UChannel.hpp"
#include "UChildConnection.hpp"
#include "UClass.hpp"
#include "UNetConnection.hpp"
#include "UNetDriver.hpp"
#include "UPackageMap.hpp"
#include "UPlayer.hpp"
UNetConnection* UNetConnection::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.NetConnection");
    return (UNetConnection*)res;
}
