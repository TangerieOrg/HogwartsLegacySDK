#include "APerSeasonFXOverrideVolume.hpp"
#include "ASeasonOverrideVolume.hpp"
#include "ESeasonEnum.hpp"
APerSeasonFXOverrideVolume* APerSeasonFXOverrideVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.PerSeasonFXOverrideVolume");
    return (APerSeasonFXOverrideVolume*)res;
}
