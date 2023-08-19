#pragma once
#include <cstdint>
class UBlackboardKeyType;
class UClass;
#pragma pack(push, 1)
struct FBlackboardKeySelector {
    TArray<UBlackboardKeyType*> AllowedTypes; // 0x0
    FName SelectedKeyName; // 0x10
    UClass* SelectedKeyType; // 0x18
    uint8_t SelectedKeyID; // 0x20
    char pad_21[0x3];
    uint8_t bNoneIsAllowedValue : 1; // 0x24
    uint8_t pad_bitfield_24_1 : 7;
    char pad_25[0x3];
}; // Size: 0x28
#pragma pack(pop)
