#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FBlendDomain.hpp"
#include "FVolumeCenterlineSettings.hpp"
class AVolume;
class ULerpVolumeInterpolant;
#pragma pack(push, 1)
class ALerpVolumeAttached : public AActor {
public:
    char pad_248[0x8];
    AVolume* AttachVolume; // 0x250
    TArray<ULerpVolumeInterpolant*> Interpolants; // 0x258
    FVolumeCenterlineSettings Shape; // 0x268
    char pad_274[0x4];
    FBlendDomain BlendDomain; // 0x278
    float Priority; // 0x2b0
    float BlendRadius; // 0x2b4
    float BlendWeight; // 0x2b8
    bool bEnabled; // 0x2bc
    char pad_2bd[0x3];
    static ALerpVolumeAttached* StaticClass();
    void SetPriority(float NewPriority);
    void Recompute();
}; // Size: 0x2c0
#pragma pack(pop)
