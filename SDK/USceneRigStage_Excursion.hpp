#pragma once
#include <cstdint>
#include "FSceneRigStage_Actor.hpp"
#include "USceneRigStage.hpp"
#pragma pack(push, 1)
class USceneRigStage_Excursion : public USceneRigStage {
public:
    char pad_180[0x10];
    static USceneRigStage_Excursion* StaticClass();
}; // Size: 0x190
#pragma pack(pop)
