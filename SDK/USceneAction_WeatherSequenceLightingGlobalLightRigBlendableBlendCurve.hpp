#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "USceneAction_WeatherSequenceLightingGlobalLightRigBlendable.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceLightingGlobalLightRigBlendableBlendCurve : public USceneAction_WeatherSequenceLightingGlobalLightRigBlendable {
public:
    FRuntimeFloatCurve BlendWeight; // 0xd0
    bool bStretchToDuration; // 0x158
    char pad_159[0x7];
    static USceneAction_WeatherSequenceLightingGlobalLightRigBlendableBlendCurve* StaticClass();
}; // Size: 0x160
#pragma pack(pop)
