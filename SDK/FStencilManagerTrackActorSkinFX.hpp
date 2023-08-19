#pragma once
#include <cstdint>
#include "FStencilManagerSkinFX.hpp"
#include "FStencilManagerTrackActor.hpp"
#pragma pack(push, 1)
struct FStencilManagerTrackActorSkinFX : public FStencilManagerTrackActor {
    FStencilManagerSkinFX SkinFX; // 0x10
    char pad_38[0x8];
}; // Size: 0x40
#pragma pack(pop)
