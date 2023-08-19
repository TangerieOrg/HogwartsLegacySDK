#pragma once
#include <cstdint>
#include "USceneActionBlueprintVarProvider.hpp"
class UBoolProvider;
#pragma pack(push, 1)
class USceneActionBlueprintVarProviderBool : public USceneActionBlueprintVarProvider {
public:
    UBoolProvider* Value; // 0x38
    static USceneActionBlueprintVarProviderBool* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
