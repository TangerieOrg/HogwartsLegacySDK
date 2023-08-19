#pragma once
#include <cstdint>
#include "ALinkActor.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
class ALinkStripActor : public ALinkActor {
public:
    FVector LinkStartPos2; // 0x2d0
    FVector LinkEndPos2; // 0x2dc
    char pad_2e8[0x8];
    static ALinkStripActor* StaticClass();
}; // Size: 0x2f0
#pragma pack(pop)
