#pragma once
#include <cstdint>
#include "UAblConditionalBranchTaskBase.hpp"
class UClass;
#pragma pack(push, 1)
class UAblConditionalBranchTask : public UAblConditionalBranchTaskBase {
public:
    UClass* BranchAbilityClass; // 0xc0
    static UAblConditionalBranchTask* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
