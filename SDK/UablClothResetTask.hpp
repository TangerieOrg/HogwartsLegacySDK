#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#include "UablResetReset_ClothingTeleportMode.hpp"
#pragma pack(push, 1)
class UablClothResetTask : public UAblAbilityTask {
public:
    UablResetReset_ClothingTeleportMode ClothTeleportMode; // 0x70
    bool bExecuteOnStart; // 0x71
    char pad_72[0x6];
    static UablClothResetTask* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
