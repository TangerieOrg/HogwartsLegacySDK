#pragma once
#include <cstdint>
#include "FSceneRigStage_Name.hpp"
#include "USceneRig.hpp"
#pragma pack(push, 1)
class USceneRig_SpellMinigame : public USceneRig {
public:
    FSceneRigStage_Name AssignedSpell; // 0x238
    static USceneRig_SpellMinigame* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
