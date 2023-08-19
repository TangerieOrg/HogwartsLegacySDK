#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class AMaterialInstanceActor : public AActor {
public:
    TArray<AActor*> TargetActors; // 0x248
    static AMaterialInstanceActor* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
