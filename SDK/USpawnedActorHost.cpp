#include "UInterface.hpp"
#include "USpawnedActorHost.hpp"
USpawnedActorHost* USpawnedActorHost::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.SpawnedActorHost");
    return (USpawnedActorHost*)res;
}
