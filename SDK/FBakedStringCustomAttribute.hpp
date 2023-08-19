#pragma once
#include <cstdint>
#include "FStringCurve.hpp"
#pragma pack(push, 1)
struct FBakedStringCustomAttribute {
    FName AttributeName; // 0x0
    FStringCurve StringCurve; // 0x8
}; // Size: 0x90
#pragma pack(pop)
