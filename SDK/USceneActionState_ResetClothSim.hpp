#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
class USceneAction_ResetClothSim;
#pragma pack(push, 1)
class USceneActionState_ResetClothSim : public USceneRigObjectActionState {
public:
    USceneAction_ResetClothSim* ResetClothSim; // 0x70
    static USceneActionState_ResetClothSim* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
