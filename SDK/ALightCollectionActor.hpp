#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class ALightCollectionActor : public AActor {
public:
    TArray<void*> Lights; // 0x248
    static ALightCollectionActor* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
