#include "UAblBlendWeightMultiplierGetter.hpp"
#include "UAblBlendWeightMultiplierGetter_FallBlend.hpp"
UAblBlendWeightMultiplierGetter_FallBlend* UAblBlendWeightMultiplierGetter_FallBlend::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendWeightMultiplierGetter_FallBlend");
    return (UAblBlendWeightMultiplierGetter_FallBlend*)res;
}
