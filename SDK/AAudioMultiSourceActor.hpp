#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "FAudioMultiSourceAudioEvent.hpp"
#include "FVector.hpp"
class UAkComponent;
#pragma pack(push, 1)
class AAudioMultiSourceActor : public AVolume {
public:
    TArray<void*> StaticMeshes; // 0x280
    TArray<FAudioMultiSourceAudioEvent> Events; // 0x290
    float DensityScale; // 0x2a0
    uint32_t RandomSeed; // 0x2a4
    float ClumpingFactor; // 0x2a8
    char pad_2ac[0x4];
    TArray<FVector> SamplePoints; // 0x2b0
    bool bManuallyModifiedSamplePoints; // 0x2c0
    char pad_2c1[0x3];
    FVector OnConstructionLocation; // 0x2c4
    TArray<UAkComponent*> AudioComponents; // 0x2d0
    static AAudioMultiSourceActor* StaticClass();
}; // Size: 0x2e0
#pragma pack(pop)
