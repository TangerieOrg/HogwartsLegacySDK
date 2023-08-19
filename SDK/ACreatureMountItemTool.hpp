#pragma once
#include <cstdint>
#include "AInventoryItemTool.hpp"
class UClass;
class ACreatureMountHandler;
#pragma pack(push, 1)
class ACreatureMountItemTool : public AInventoryItemTool {
public:
    UClass* MountHandlerClass; // 0x430
    ACreatureMountHandler* MountHandler; // 0x438
    char pad_440[0x8];
    static ACreatureMountItemTool* StaticClass();
    void SpawnAndMountCreature(bool bUseTransition, bool bInFlight);
}; // Size: 0x448
#pragma pack(pop)
