#pragma once
#include <cstdint>
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FLocalSpacePose {
    TArray<FTransform> Transforms; // 0x0
    TArray<FName> Names; // 0x10
}; // Size: 0x20
#pragma pack(pop)
