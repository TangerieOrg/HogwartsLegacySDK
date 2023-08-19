#pragma once
#include <cstdint>
#include "FGuid.hpp"
class UMaterialFunctionInterface;
#pragma pack(push, 1)
struct FMaterialFunctionInfo {
    FGuid StateId; // 0x0
    UMaterialFunctionInterface* Function; // 0x10
}; // Size: 0x18
#pragma pack(pop)
