#include "ADefaultPhysicsVolume.hpp"
#include "APhysicsVolume.hpp"
ADefaultPhysicsVolume* ADefaultPhysicsVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DefaultPhysicsVolume");
    return (ADefaultPhysicsVolume*)res;
}
