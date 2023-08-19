#pragma once
#include <cstdint>
#include "FLocalStencilEffectMesh.hpp"
#include "ULocalStencilComponentBase.hpp"
#pragma pack(push, 1)
class ULocalStencilComponent : public ULocalStencilComponentBase {
public:
    FLocalStencilEffectMesh EffectMesh; // 0x2e0
    static ULocalStencilComponent* StaticClass();
}; // Size: 0x340
#pragma pack(pop)
