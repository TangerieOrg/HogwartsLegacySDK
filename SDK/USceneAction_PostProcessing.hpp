#pragma once
#include <cstdint>
#include "FBlendDomain.hpp"
#include "FPostProcessSettings.hpp"
#include "USceneAction_PostProcessingBaseFeatherInOut.hpp"
#pragma pack(push, 1)
class USceneAction_PostProcessing : public USceneAction_PostProcessingBaseFeatherInOut {
public:
    char pad_98[0x8];
    FPostProcessSettings PostProcessSettings; // 0xa0
    FBlendDomain BlendDomain; // 0x690
    bool bEnabled; // 0x6c8
    char pad_6c9[0x7];
    static USceneAction_PostProcessing* StaticClass();
}; // Size: 0x6d0
#pragma pack(pop)
