#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "FBlendDomain.hpp"
#include "FPostProcessSettings.hpp"
#include "FRenderingCutBits.hpp"
class AActor;
#pragma pack(push, 1)
class ARenderingCutVolume : public AVolume {
public:
    char pad_280[0x8];
    FRenderingCutBits RenderingCut; // 0x288
    float PreExposureResetValue; // 0x290
    float Priority; // 0x294
    FBlendDomain BlendDomain; // 0x298
    bool bEnabled; // 0x2d0
    bool bOnlyAlongPositiveXAxis; // 0x2d1
    char pad_2d2[0xe];
    FPostProcessSettings PostProcessing; // 0x2e0
    static ARenderingCutVolume* StaticClass();
    void SetPriority(float NewPriority);
    void ProcessBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
}; // Size: 0x8d0
#pragma pack(pop)
