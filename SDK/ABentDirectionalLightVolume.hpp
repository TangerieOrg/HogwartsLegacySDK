#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FBentDirectionalLightParams.hpp"
#include "FBlendDomain.hpp"
class UGlobalLightingBlendableBentDirectionalLight;
class UBoxComponent;
#pragma pack(push, 1)
class ABentDirectionalLightVolume : public AActor {
public:
    char pad_248[0x8];
    FBentDirectionalLightParams Params; // 0x250
    char pad_264[0x4];
    UGlobalLightingBlendableBentDirectionalLight* GlobalLightingBlendable; // 0x268
    UBoxComponent* BoundingBox; // 0x270
    FBlendDomain BlendDomain; // 0x278
    float Priority; // 0x2b0
    float BlendRadius; // 0x2b4
    float BlendWeight; // 0x2b8
    bool bEnabled; // 0x2bc
    char pad_2bd[0x3];
    float PositionalBlendWeight; // 0x2c0
    char pad_2c4[0x4];
    static ABentDirectionalLightVolume* StaticClass();
}; // Size: 0x2c8
#pragma pack(pop)
