#pragma once
#include <cstdint>
#include "EFormatArgumentType\Type.hpp"
#include "ETextGender.hpp"
#pragma pack(push, 1)
struct FFormatArgumentData {
    FString ArgumentName; // 0x0
    EFormatArgumentType::Type ArgumentValueType; // 0x10
    char pad_11[0x1f];
    int32_t ArgumentValueInt; // 0x30
    float ArgumentValueFloat; // 0x34
    ETextGender ArgumentValueGender; // 0x38
    char pad_39[0x7];
}; // Size: 0x40
#pragma pack(pop)
