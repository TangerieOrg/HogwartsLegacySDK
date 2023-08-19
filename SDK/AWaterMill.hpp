#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class AWaterMill : public AActor {
public:
    static AWaterMill* StaticClass();
    void DeactivateWaterMill();
    void ActivateWaterMill();
}; // Size: 0x248
#pragma pack(pop)
