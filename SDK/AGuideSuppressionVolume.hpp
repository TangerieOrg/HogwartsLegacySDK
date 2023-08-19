#pragma once
#include <cstdint>
#include "ATriggerBox.hpp"
class AActor;
#pragma pack(push, 1)
class AGuideSuppressionVolume : public ATriggerBox {
public:
    char pad_250[0x8];
    static AGuideSuppressionVolume* StaticClass();
    void OnEndOverlap(AActor* SelfActor, AActor* OtherActor);
    void OnBeginOverlap(AActor* SelfActor, AActor* OtherActor);
}; // Size: 0x258
#pragma pack(pop)
