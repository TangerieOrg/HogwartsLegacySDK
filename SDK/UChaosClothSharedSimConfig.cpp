#include "UChaosClothSharedSimConfig.hpp"
#include "UClothSharedConfigCommon.hpp"
UChaosClothSharedSimConfig* UChaosClothSharedSimConfig::StaticClass() {
    static auto res = find_uobject("Class /Script/ChaosCloth.ChaosClothSharedSimConfig");
    return (UChaosClothSharedSimConfig*)res;
}
