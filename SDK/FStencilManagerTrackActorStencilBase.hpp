#pragma once
#include <cstdint>
#include "FStencilManagerTrackActor.hpp"
#pragma pack(push, 1)
struct FStencilManagerTrackActorStencilBase : public FStencilManagerTrackActor {
    char pad_10[0x50];
}; // Size: 0x60
#pragma pack(pop)
