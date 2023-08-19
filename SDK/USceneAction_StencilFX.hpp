#pragma once
#include <cstdint>
#include "FStencilManagerEffectName.hpp"
#include "USceneAction_StencilFXBase.hpp"
#pragma pack(push, 1)
class USceneAction_StencilFX : public USceneAction_StencilFXBase {
public:
    FStencilManagerEffectName StencilFX; // 0x88
    static USceneAction_StencilFX* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
