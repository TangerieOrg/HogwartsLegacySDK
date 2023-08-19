#pragma once
#include <cstdint>
#include "FStencilManagerCutsomDepthFX.hpp"
#include "FStencilManagerTrackActorStencilBase.hpp"
#pragma pack(push, 1)
struct FStencilManagerTrackActorStencil : public FStencilManagerTrackActorStencilBase {
    FStencilManagerCutsomDepthFX DepthFX; // 0x60
}; // Size: 0x108
#pragma pack(pop)
