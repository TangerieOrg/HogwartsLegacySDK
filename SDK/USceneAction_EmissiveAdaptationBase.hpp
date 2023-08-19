#pragma once
#include <cstdint>
#include "FBlendDomain.hpp"
#include "USceneRigActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_EmissiveAdaptationBase : public USceneRigActionBase {
public:
    char pad_88[0x8];
    float FeatherInTime; // 0x90
    float FeatherOutTime; // 0x94
    FBlendDomain BlendDomain; // 0x98
    float Priority; // 0xd0
    bool bEnabled; // 0xd4
    char pad_d5[0x3];
    static USceneAction_EmissiveAdaptationBase* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
