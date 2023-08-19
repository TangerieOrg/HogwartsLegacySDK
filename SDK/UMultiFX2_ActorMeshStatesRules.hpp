#pragma once
#include <cstdint>
#include "FMaterialSwapRules.hpp"
#include "UMultiFX2_ActorMeshStates.hpp"
#pragma pack(push, 1)
class UMultiFX2_ActorMeshStatesRules : public UMultiFX2_ActorMeshStates {
public:
    FMaterialSwapRules Rules; // 0x88
    static UMultiFX2_ActorMeshStatesRules* StaticClass();
}; // Size: 0x168
#pragma pack(pop)
