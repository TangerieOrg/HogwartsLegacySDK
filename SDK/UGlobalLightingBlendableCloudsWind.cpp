#include "EGlobalLightingBlendableInputType.hpp"
#include "UCloudsWindParams.hpp"
#include "UGlobalLightingBlendable.hpp"
#include "UGlobalLightingBlendableCloudsWind.hpp"
UGlobalLightingBlendableCloudsWind* UGlobalLightingBlendableCloudsWind::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingBlendableCloudsWind");
    return (UGlobalLightingBlendableCloudsWind*)res;
}
