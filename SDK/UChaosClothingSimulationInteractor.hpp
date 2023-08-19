#pragma once
#include <cstdint>
#include "UClothingSimulationInteractor.hpp"
#pragma pack(push, 1)
class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor {
public:
    char pad_90[0x10];
    static UChaosClothingSimulationInteractor* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
