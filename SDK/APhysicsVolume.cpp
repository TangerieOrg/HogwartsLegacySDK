#include "APhysicsVolume.hpp"
#include "AVolume.hpp"
APhysicsVolume* APhysicsVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PhysicsVolume");
    return (APhysicsVolume*)res;
}
