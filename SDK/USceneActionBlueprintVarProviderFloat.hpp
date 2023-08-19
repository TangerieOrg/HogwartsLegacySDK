#pragma once
#include <cstdint>
#include "USceneActionBlueprintVarProvider.hpp"
class UFloatProvider;
#pragma pack(push, 1)
class USceneActionBlueprintVarProviderFloat : public USceneActionBlueprintVarProvider {
public:
    UFloatProvider* Value; // 0x38
    static USceneActionBlueprintVarProviderFloat* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
