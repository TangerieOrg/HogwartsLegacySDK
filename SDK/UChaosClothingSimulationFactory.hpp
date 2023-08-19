#pragma once
#include <cstdint>
#include "UClothingSimulationFactory.hpp"
#pragma pack(push, 1)
class UChaosClothingSimulationFactory : public UClothingSimulationFactory {
public:
    static UChaosClothingSimulationFactory* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
