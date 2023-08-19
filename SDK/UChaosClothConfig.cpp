#include "EClothMassMode.hpp"
#include "FChaosClothWeightedValue.hpp"
#include "FVector.hpp"
#include "UChaosClothConfig.hpp"
#include "UClothConfigCommon.hpp"
UChaosClothConfig* UChaosClothConfig::StaticClass() {
    static auto res = find_uobject("Class /Script/ChaosCloth.ChaosClothConfig");
    return (UChaosClothConfig*)res;
}
