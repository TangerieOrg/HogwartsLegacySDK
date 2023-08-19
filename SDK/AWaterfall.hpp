#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class AWaterfall : public AActor {
public:
    static AWaterfall* StaticClass();
    void StopWater();
    void StartWater();
}; // Size: 0x248
#pragma pack(pop)
