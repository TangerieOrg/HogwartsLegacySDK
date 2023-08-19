#pragma once
#include <cstdint>
#include "FBlendDomain.hpp"
#include "USceneAction_PostProcessingBaseFeatherInOut.hpp"
class UPostProcessingVar;
#pragma pack(push, 1)
class USceneAction_PostProcessingVars : public USceneAction_PostProcessingBaseFeatherInOut {
public:
    TArray<UPostProcessingVar*> PostProcessingVars; // 0x98
    FBlendDomain BlendDomain; // 0xa8
    bool bStretchCurvesToTime; // 0xe0
    char pad_e1[0x7];
    static USceneAction_PostProcessingVars* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
