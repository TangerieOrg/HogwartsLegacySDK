#pragma once
#include <cstdint>
#include "USceneActionState_WeatherSequenceLightingBase.hpp"
#pragma pack(push, 1)
class USceneActionState_WeatherSequenceLightingGlobalLightRigBlendable : public USceneActionState_WeatherSequenceLightingBase {
public:
    char pad_58[0x8];
    static USceneActionState_WeatherSequenceLightingGlobalLightRigBlendable* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
