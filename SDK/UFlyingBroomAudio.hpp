#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UFlyingBroomAudio : public UDataAsset {
public:
    FString SpeedRTPC; // 0x30
    FVector2D SpeedValues; // 0x40
    FVector2D SpeedAudioValues; // 0x48
    FString HeightRTPC; // 0x50
    FVector2D HeightValues; // 0x60
    FVector2D HeightAudioValues; // 0x68
    FString PitchRTPC; // 0x70
    FVector2D PitchValues; // 0x80
    FVector2D PitchAudioValues; // 0x88
    static UFlyingBroomAudio* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
