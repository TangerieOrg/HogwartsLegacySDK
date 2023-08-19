#include "ADEPRECATED_ExpHeightFogVolume.hpp"
#include "AVolume.hpp"
ADEPRECATED_ExpHeightFogVolume* ADEPRECATED_ExpHeightFogVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/ExpHeightFogVolumes.ExpHeightFogVolume");
    return (ADEPRECATED_ExpHeightFogVolume*)res;
}
