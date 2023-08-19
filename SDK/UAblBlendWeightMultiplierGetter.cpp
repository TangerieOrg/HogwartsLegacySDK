#include "UAblBlendWeightMultiplierGetter.hpp"
#include "UObject.hpp"
UAblBlendWeightMultiplierGetter* UAblBlendWeightMultiplierGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblBlendWeightMultiplierGetter");
    return (UAblBlendWeightMultiplierGetter*)res;
}
