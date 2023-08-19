#include "AActor.hpp"
#include "AOnlineBeaconClient.hpp"
#include "AOnlineBeaconHostObject.hpp"
#include "UClass.hpp"
AOnlineBeaconHostObject* AOnlineBeaconHostObject::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.OnlineBeaconHostObject");
    return (AOnlineBeaconHostObject*)res;
}
