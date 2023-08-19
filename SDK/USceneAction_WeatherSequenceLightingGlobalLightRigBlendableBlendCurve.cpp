#include "FRuntimeFloatCurve.hpp"
#include "USceneAction_WeatherSequenceLightingGlobalLightRigBlendable.hpp"
#include "USceneAction_WeatherSequenceLightingGlobalLightRigBlendableBlendCurve.hpp"
USceneAction_WeatherSequenceLightingGlobalLightRigBlendableBlendCurve* USceneAction_WeatherSequenceLightingGlobalLightRigBlendableBlendCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceLightingGlobalLightRigBlendableBlendCurve");
    return (USceneAction_WeatherSequenceLightingGlobalLightRigBlendableBlendCurve*)res;
}
