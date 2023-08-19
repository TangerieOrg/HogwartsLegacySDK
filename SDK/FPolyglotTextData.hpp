#pragma once
#include <cstdint>
#include "ELocalizedTextSourceCategory.hpp"
#pragma pack(push, 1)
struct FPolyglotTextData {
    ELocalizedTextSourceCategory Category; // 0x0
    char pad_1[0x7];
    FString NativeCulture; // 0x8
    FString Namespace; // 0x18
    FString Key; // 0x28
    FString NativeString; // 0x38
    char pad_48[0x50];
    bool bIsMinimalPatch; // 0x98
    char pad_99[0x1f];
}; // Size: 0xb8
#pragma pack(pop)
