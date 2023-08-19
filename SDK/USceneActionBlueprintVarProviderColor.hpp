#pragma once
#include <cstdint>
#include "USceneActionBlueprintVarProvider.hpp"
class UColorProvider;
#pragma pack(push, 1)
class USceneActionBlueprintVarProviderColor : public USceneActionBlueprintVarProvider {
public:
    UColorProvider* Value; // 0x38
    static USceneActionBlueprintVarProviderColor* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
