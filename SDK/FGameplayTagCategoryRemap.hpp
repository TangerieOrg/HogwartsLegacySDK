#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FGameplayTagCategoryRemap {
    FString BaseCategory; // 0x0
    TArray<FString> RemapCategories; // 0x10
}; // Size: 0x20
#pragma pack(pop)
