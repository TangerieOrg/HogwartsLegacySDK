#pragma once
#include <cstdint>
#include "USceneAction_WeatherSequenceLightingGlobalLightRigBlendable.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceLightingGlobalLightRigBlendableBlendConstant : public USceneAction_WeatherSequenceLightingGlobalLightRigBlendable {
public:
    float BlendWeight; // 0xd0
    char pad_d4[0x4];
    static USceneAction_WeatherSequenceLightingGlobalLightRigBlendableBlendConstant* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
