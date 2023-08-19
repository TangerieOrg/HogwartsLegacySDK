#pragma once
#include <cstdint>
#include "EGlobalLightingSimpleFogZMode.hpp"
#include "FBlendDomain.hpp"
#include "USceneRigActionBase.hpp"
class UGlobalLightingBlendable;
class UTransformProvider;
#pragma pack(push, 1)
class USceneAction_GlobalLightRigBlendable : public USceneRigActionBase {
public:
    UGlobalLightingBlendable* GlobalLightingBlendable; // 0x88
    EGlobalLightingSimpleFogZMode FogZMode; // 0x90
    char pad_91[0x7];
    UTransformProvider* FogZBase; // 0x98
    float Priority; // 0xa0
    char pad_a4[0x4];
    FBlendDomain BlendDomain; // 0xa8
    float FeatherInTime; // 0xe0
    float FeatherOutTime; // 0xe4
    bool bPreviewOnly; // 0xe8
    char pad_e9[0x7];
    static USceneAction_GlobalLightRigBlendable* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
