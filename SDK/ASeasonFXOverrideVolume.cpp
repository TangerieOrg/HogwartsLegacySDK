#include "ASeasonFXOverrideVolume.hpp"
#include "ASeasonOverrideVolume.hpp"
#include "ESeasonEnum.hpp"
ASeasonFXOverrideVolume* ASeasonFXOverrideVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/EnvironmentalGlobals.SeasonFXOverrideVolume");
    return (ASeasonFXOverrideVolume*)res;
}
