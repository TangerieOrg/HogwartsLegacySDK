#pragma once
#include <cstdint>
#include "EOffsetTypeEnum.hpp"
#include "ERelativeToEnum.hpp"
class UObject;
#pragma pack(push, 1)
struct FRelativeTime {
    float Offset; // 0x0
    EOffsetTypeEnum OffsetType; // 0x4
    ERelativeToEnum RelativeToType; // 0x5
    char pad_6[0x2];
    UObject* RelativeToObject; // 0x8
    bool bEditable; // 0x10
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
