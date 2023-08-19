#pragma once
#include <cstdint>
#include "FCollectionParameterBase.hpp"
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FCollectionVectorParameter : public FCollectionParameterBase {
    FLinearColor DefaultValue; // 0x18
}; // Size: 0x28
#pragma pack(pop)
