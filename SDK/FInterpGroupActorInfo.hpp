#pragma once
#include <cstdint>
class AActor;
#pragma pack(push, 1)
struct FInterpGroupActorInfo {
    FName ObjectName; // 0x0
    TArray<AActor*> Actors; // 0x8
}; // Size: 0x18
#pragma pack(pop)
