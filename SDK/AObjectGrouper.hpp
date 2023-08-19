#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class AObjectGrouper : public AActor {
public:
    TArray<AActor*> Objects; // 0x248
    static AObjectGrouper* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
