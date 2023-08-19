#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
class USceneAction_DisableClothSimulation;
#pragma pack(push, 1)
class USceneActionState_DisableClothSimulation : public USceneRigObjectActionState {
public:
    USceneAction_DisableClothSimulation* DisableClothDefinition; // 0x70
    char pad_78[0x20];
    static USceneActionState_DisableClothSimulation* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
