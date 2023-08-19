#include "AKillZVolume.hpp"
#include "APhysicsVolume.hpp"
AKillZVolume* AKillZVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.KillZVolume");
    return (AKillZVolume*)res;
}
