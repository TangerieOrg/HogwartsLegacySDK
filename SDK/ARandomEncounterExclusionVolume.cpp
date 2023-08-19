#include "APhoenixTrackingVolume.hpp"
#include "ARandomEncounterExclusionVolume.hpp"
ARandomEncounterExclusionVolume* ARandomEncounterExclusionVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RandomEncounterExclusionVolume");
    return (ARandomEncounterExclusionVolume*)res;
}
