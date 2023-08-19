#pragma once
#include <cstdint>
#include "UEnvQueryNode.hpp"
class UClass;
#pragma pack(push, 1)
class UEnvQueryGenerator : public UEnvQueryNode {
public:
    FString OptionName; // 0x30
    UClass* ItemType; // 0x40
    uint8_t bAutoSortTests : 1; // 0x48
    uint8_t pad_bitfield_48_1 : 7;
    char pad_49[0x7];
    static UEnvQueryGenerator* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
