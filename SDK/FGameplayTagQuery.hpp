#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#pragma pack(push, 1)
struct FGameplayTagQuery {
    int32_t TokenStreamVersion; // 0x0
    char pad_4[0x4];
    TArray<FGameplayTag> TagDictionary; // 0x8
    TArray<uint8_t> QueryTokenStream; // 0x18
    FString UserDescription; // 0x28
    FString AutoDescription; // 0x38
}; // Size: 0x48
#pragma pack(pop)
