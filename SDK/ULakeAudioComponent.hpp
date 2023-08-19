#pragma once
#include <cstdint>
#include "FLakeAudioSamplePoint.hpp"
#include "UAkComponent.hpp"
#pragma pack(push, 1)
class ULakeAudioComponent : public UAkComponent {
public:
    char pad_620[0x8];
    TArray<FLakeAudioSamplePoint> SamplePoints; // 0x628
    char pad_638[0x8];
    static ULakeAudioComponent* StaticClass();
}; // Size: 0x640
#pragma pack(pop)
