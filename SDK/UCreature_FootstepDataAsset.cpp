#include "FCreatureParticleSurfaceList.hpp"
#include "FVector.hpp"
#include "UAkAudioEvent.hpp"
#include "UCreature_FootstepDataAsset.hpp"
#include "UObject.hpp"
UCreature_FootstepDataAsset* UCreature_FootstepDataAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Creature_FootstepDataAsset");
    return (UCreature_FootstepDataAsset*)res;
}
