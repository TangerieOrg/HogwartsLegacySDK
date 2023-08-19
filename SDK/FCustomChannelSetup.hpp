#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "ECollisionResponse.hpp"
#pragma pack(push, 1)
struct FCustomChannelSetup {
    ECollisionChannel Channel; // 0x0
    ECollisionResponse DefaultResponse; // 0x1
    bool bTraceType; // 0x2
    bool bStaticObject; // 0x3
    FName Name; // 0x4
}; // Size: 0xc
#pragma pack(pop)
