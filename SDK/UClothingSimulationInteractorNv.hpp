#pragma once
#include <cstdint>
#include "UClothingSimulationInteractor.hpp"
#pragma pack(push, 1)
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor {
public:
    char pad_90[0x10];
    static UClothingSimulationInteractorNv* StaticClass();
    void SetAnimDriveDamperStiffness(float InStiffness);
}; // Size: 0xa0
#pragma pack(pop)
