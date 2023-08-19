#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FRiverAudioPoint.hpp"
#include "FVector.hpp"
class UAkComponent;
#pragma pack(push, 1)
class ARiverSectionAudio : public AActor {
public:
    bool bRelativeLocations; // 0x248
    char pad_249[0x7];
    TArray<FRiverAudioPoint> AudioPoints; // 0x250
    UAkComponent* AkComponent; // 0x260
    FVector ClosestAudioLocation; // 0x268
    int32_t ClosestIndex; // 0x274
    float CurrSpeedOfFlow; // 0x278
    char pad_27c[0x4];
    static ARiverSectionAudio* StaticClass();
}; // Size: 0x280
#pragma pack(pop)
