#include "FRuntimeFloatCurve.hpp"
#include "UAimEyesData.hpp"
#include "UDataAsset.hpp"
UAimEyesData* UAimEyesData::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AimEyesData");
    return (UAimEyesData*)res;
}
