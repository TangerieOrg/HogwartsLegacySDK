#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMeshElementAttributeType {
    None = 0,
    FVector4 = 1,
    FVector = 2,
    FVector2D = 3,
    Float = 4,
    Int = 5,
    Bool = 6,
    FName = 7,
    EMeshElementAttributeType_MAX = 8,
};
#pragma pack(pop)
