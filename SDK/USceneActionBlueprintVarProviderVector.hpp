#pragma once
#include <cstdint>
#include "USceneActionBlueprintVarProvider.hpp"
class UVectorProvider;
#pragma pack(push, 1)
class USceneActionBlueprintVarProviderVector : public USceneActionBlueprintVarProvider {
public:
    UVectorProvider* Value; // 0x38
    static USceneActionBlueprintVarProviderVector* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
