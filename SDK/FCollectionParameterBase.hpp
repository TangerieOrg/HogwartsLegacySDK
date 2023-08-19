#pragma once
#include <cstdint>
#include "FGuid.hpp"
#pragma pack(push, 1)
struct FCollectionParameterBase {
    FName ParameterName; // 0x0
    FGuid ID; // 0x8
}; // Size: 0x18
#pragma pack(pop)
