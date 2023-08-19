#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FGameplayTagRedirect {
    FName OldTagName; // 0x0
    FName NewTagName; // 0x8
}; // Size: 0x10
#pragma pack(pop)
