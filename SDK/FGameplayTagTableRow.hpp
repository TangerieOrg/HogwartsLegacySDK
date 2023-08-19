#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FGameplayTagTableRow : public FTableRowBase {
    FName Tag; // 0x8
    FString DevComment; // 0x10
}; // Size: 0x20
#pragma pack(pop)
