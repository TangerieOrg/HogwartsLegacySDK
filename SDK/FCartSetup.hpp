#pragma once
#include <cstdint>
class UBoxComponent;
class UTimelineComponent;
#pragma pack(push, 1)
struct FCartSetup {
    char pad_0[0x1e0];
    UBoxComponent* SlowCartTriggerBox; // 0x1e0
    UBoxComponent* StopCartTriggerBox; // 0x1e8
    UTimelineComponent* TailGateTimeline; // 0x1f0
    float FrontWheelCircumference; // 0x1f8
    float BackWheelCircumference; // 0x1fc
    float CartLength; // 0x200
    float MaxSpeed; // 0x204
}; // Size: 0x208
#pragma pack(pop)
