#pragma once
#include <cstdint>
#include "FBlueprintGlobalLightingCustomBlendablesLinearColor.hpp"
#include "FBlueprintGlobalLightingCustomBlendablesScalar.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UBlueprintGlobalLightingCustomBlendables : public UObject {
public:
    TArray<FBlueprintGlobalLightingCustomBlendablesScalar> Scalars; // 0x28
    TArray<FBlueprintGlobalLightingCustomBlendablesLinearColor> Colors; // 0x38
    static UBlueprintGlobalLightingCustomBlendables* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
