#pragma once
#include <cstdint>
#include "FLocalStencilEffect.hpp"
#include "FStencilManagerTrackActorStencilBase.hpp"
class ULocalStencilComponentBase;
#pragma pack(push, 1)
struct FStencilManagerTrackActorLocalStencil : public FStencilManagerTrackActorStencilBase {
    FLocalStencilEffect DepthFX; // 0x60
    ULocalStencilComponentBase* LocalStencilComponent; // 0x230
}; // Size: 0x238
#pragma pack(pop)
