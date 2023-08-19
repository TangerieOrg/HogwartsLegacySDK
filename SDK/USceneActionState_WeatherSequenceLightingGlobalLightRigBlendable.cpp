#include "USceneActionState_WeatherSequenceLightingBase.hpp"
#include "USceneActionState_WeatherSequenceLightingGlobalLightRigBlendable.hpp"
USceneActionState_WeatherSequenceLightingGlobalLightRigBlendable* USceneActionState_WeatherSequenceLightingGlobalLightRigBlendable::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneActionState_WeatherSequenceLightingGlobalLightRigBlendable");
    return (USceneActionState_WeatherSequenceLightingGlobalLightRigBlendable*)res;
}
