#pragma once
#include <cstdint>
#include "FGameplayTagTableRow.hpp"
#pragma pack(push, 1)
struct FRestrictedGameplayTagTableRow : public FGameplayTagTableRow {
    bool bAllowNonRestrictedChildren; // 0x20
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
