#pragma once
#include <cstdint>
#include "FBlendDomain.hpp"
#include "USceneAction_WeatherSequenceLightingBase.hpp"
class UGlobalLightingBlendable;
#pragma pack(push, 1)
class USceneAction_WeatherSequenceLightingGlobalLightRigBlendable : public USceneAction_WeatherSequenceLightingBase {
public:
    UGlobalLightingBlendable* GlobalLightingBlendable; // 0x88
    FBlendDomain BlendDomain; // 0x90
    float Priority; // 0xc8
    float PostSequenceLifetime; // 0xcc
    static USceneAction_WeatherSequenceLightingGlobalLightRigBlendable* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
