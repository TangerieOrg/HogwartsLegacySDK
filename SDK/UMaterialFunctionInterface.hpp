#pragma once
#include <cstdint>
#include "EMaterialFunctionUsage.hpp"
#include "FGuid.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UMaterialFunctionInterface : public UObject {
public:
    FGuid StateId; // 0x28
    EMaterialFunctionUsage MaterialFunctionUsage; // 0x38
    char pad_39[0x7];
    static UMaterialFunctionInterface* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
