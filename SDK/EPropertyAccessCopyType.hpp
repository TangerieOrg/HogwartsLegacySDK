#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPropertyAccessCopyType : uint8_t {
    None = 0,
    Plain = 1,
    Complex = 2,
    Bool = 3,
    Struct = 4,
    Object = 5,
    Name = 6,
    Array = 7,
    PromoteBoolToByte = 8,
    PromoteBoolToInt32 = 9,
    PromoteBoolToInt64 = 10,
    PromoteBoolToFloat = 11,
    PromoteByteToInt32 = 12,
    PromoteByteToInt64 = 13,
    PromoteByteToFloat = 14,
    PromoteInt32ToInt64 = 15,
    PromoteInt32ToFloat = 16,
    EPropertyAccessCopyType_MAX = 17,
};
#pragma pack(pop)
