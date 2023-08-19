#include "FBlendDomain.hpp"
#include "UGlobalLightingBlendable.hpp"
#include "USceneAction_WeatherSequenceLightingBase.hpp"
#include "USceneAction_WeatherSequenceLightingGlobalLightRigBlendable.hpp"
USceneAction_WeatherSequenceLightingGlobalLightRigBlendable* USceneAction_WeatherSequenceLightingGlobalLightRigBlendable::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceLightingGlobalLightRigBlendable");
    return (USceneAction_WeatherSequenceLightingGlobalLightRigBlendable*)res;
}
