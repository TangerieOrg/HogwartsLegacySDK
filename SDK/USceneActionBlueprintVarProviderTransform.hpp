#pragma once
#include <cstdint>
#include "USceneActionBlueprintVarProvider.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class USceneActionBlueprintVarProviderTransform : public USceneActionBlueprintVarProvider {
public:
    UTransformProvider* Value; // 0x38
    static USceneActionBlueprintVarProviderTransform* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
