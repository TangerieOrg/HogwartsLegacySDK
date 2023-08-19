#pragma once
#include <cstdint>
class UClass;
#pragma pack(push, 1)
struct FGameplayPropertySearchHelper {
    char pad_0[0x8];
    int32_t OffsetInObject; // 0x8
    int32_t Depth; // 0xc
    FString CachedInternalName; // 0x10
    FString CachedDisplayName; // 0x20
    char pad_30[0x8];
    UClass* OwnerClass; // 0x38
    char pad_40[0x10];
}; // Size: 0x50
#pragma pack(pop)
