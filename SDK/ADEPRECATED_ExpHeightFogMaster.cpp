#include "AActor.hpp"
#include "ADEPRECATED_ExpHeightFogMaster.hpp"
ADEPRECATED_ExpHeightFogMaster* ADEPRECATED_ExpHeightFogMaster::StaticClass() {
    static auto res = find_uobject("Class /Script/ExpHeightFogVolumes.ExpHeightFogMaster");
    return (ADEPRECATED_ExpHeightFogMaster*)res;
}
