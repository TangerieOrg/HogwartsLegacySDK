#pragma once
#include <cstdint>
#include "FSceneRigStage_Actor.hpp"
#include "USceneRigStage.hpp"
#pragma pack(push, 1)
class USceneRigStage_WinnerLoser : public USceneRigStage {
public:
    char pad_180[0x10];
    FSceneRigStage_Actor Loser; // 0x190
    char pad_1a8[0x8];
    static USceneRigStage_WinnerLoser* StaticClass();
}; // Size: 0x1b0
#pragma pack(pop)
