#include "APhoenixTrackingVolume.hpp"
#include "ARandomEncounterVolume.hpp"
ARandomEncounterVolume* ARandomEncounterVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RandomEncounterVolume");
    return (ARandomEncounterVolume*)res;
}
