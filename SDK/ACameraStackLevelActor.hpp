#pragma once
#include <cstdint>
#include "ACameraStackActor.hpp"
#include "FCameraPreUpdateTickFunction.hpp"
class AActor;
#pragma pack(push, 1)
class ACameraStackLevelActor : public ACameraStackActor {
public:
    FCameraPreUpdateTickFunction PreUpdateTick; // 0x408
    char pad_450[0x1c];
    bool bIsInWorldSpace; // 0x46c
    char pad_46d[0x1b];
    static ACameraStackLevelActor* StaticClass();
    void SetRuntimeTarget(AActor* InActor);
    AActor* GetRuntimeTarget();
}; // Size: 0x488
#pragma pack(pop)
