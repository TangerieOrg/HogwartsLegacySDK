#pragma once
#include <cstdint>
#include "UBlackboardKeyType.hpp"
class UEnum;
#pragma pack(push, 1)
class UBlackboardKeyType_Enum : public UBlackboardKeyType {
public:
    UEnum* EnumType; // 0x30
    FString EnumName; // 0x38
    uint8_t bIsEnumNameValid : 1; // 0x48
    uint8_t pad_bitfield_48_1 : 7;
    char pad_49[0x7];
    static UBlackboardKeyType_Enum* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
