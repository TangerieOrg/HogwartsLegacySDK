#pragma once
#include <cstdint>
#include "USceneActionBlueprintVarProvider.hpp"
class UIntProvider;
#pragma pack(push, 1)
class USceneActionBlueprintVarProviderInt : public USceneActionBlueprintVarProvider {
public:
    UIntProvider* Value; // 0x38
    static USceneActionBlueprintVarProviderInt* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
