#pragma once
#include <cstdint>
#include "AInventoryItemTool.hpp"
#include "FVector.hpp"
class UClass;
#pragma pack(push, 1)
class AChompingCabbage_InvTool : public AInventoryItemTool {
public:
    UClass* CabbageEnemyClass; // 0x430
    FVector SpawnOffset; // 0x438
    FVector ThrowVelocity; // 0x444
    static AChompingCabbage_InvTool* StaticClass();
    void SpawnChompingCabbageEnemy();
}; // Size: 0x450
#pragma pack(pop)
