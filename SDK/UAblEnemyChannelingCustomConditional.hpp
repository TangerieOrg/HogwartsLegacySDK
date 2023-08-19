#pragma once
#include <cstdint>
#include "UAblChannelingBase.hpp"
class UClass;
#pragma pack(push, 1)
class UAblEnemyChannelingCustomConditional : public UAblChannelingBase {
public:
    UClass* BranchAbility; // 0x30
    bool bBreakChannelingNearInstigator; // 0x38
    char pad_39[0x3];
    float NearRange; // 0x3c
    UClass* BreakBranchAbility; // 0x40
    static UAblEnemyChannelingCustomConditional* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
