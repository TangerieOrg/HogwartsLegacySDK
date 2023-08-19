#pragma once
#include <cstdint>
#include "FCollectionParameterBase.hpp"
#pragma pack(push, 1)
struct FCollectionScalarParameter : public FCollectionParameterBase {
    float DefaultValue; // 0x18
}; // Size: 0x1c
#pragma pack(pop)
