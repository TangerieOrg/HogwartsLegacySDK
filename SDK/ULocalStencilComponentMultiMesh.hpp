#pragma once
#include <cstdint>
#include "FLocalStencilEffectMeshAttached.hpp"
#include "ULocalStencilComponentBase.hpp"
#pragma pack(push, 1)
class ULocalStencilComponentMultiMesh : public ULocalStencilComponentBase {
public:
    TArray<FLocalStencilEffectMeshAttached> EffectMeshes; // 0x2e0
    static ULocalStencilComponentMultiMesh* StaticClass();
}; // Size: 0x2f0
#pragma pack(pop)
