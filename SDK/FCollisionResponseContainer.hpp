#pragma once
#include <cstdint>
#include "ECollisionResponse.hpp"
#pragma pack(push, 1)
struct FCollisionResponseContainer {
    ECollisionResponse WorldStatic; // 0x0
    ECollisionResponse WorldDynamic; // 0x1
    ECollisionResponse Pawn; // 0x2
    ECollisionResponse Visibility; // 0x3
    ECollisionResponse Camera; // 0x4
    ECollisionResponse PhysicsBody; // 0x5
    ECollisionResponse Vehicle; // 0x6
    ECollisionResponse Destructible; // 0x7
    ECollisionResponse EngineTraceChannel1; // 0x8
    ECollisionResponse EngineTraceChannel2; // 0x9
    ECollisionResponse EngineTraceChannel3; // 0xa
    ECollisionResponse EngineTraceChannel4; // 0xb
    ECollisionResponse EngineTraceChannel5; // 0xc
    ECollisionResponse EngineTraceChannel6; // 0xd
    ECollisionResponse GameTraceChannel1; // 0xe
    ECollisionResponse GameTraceChannel2; // 0xf
    ECollisionResponse GameTraceChannel3; // 0x10
    ECollisionResponse GameTraceChannel4; // 0x11
    ECollisionResponse GameTraceChannel5; // 0x12
    ECollisionResponse GameTraceChannel6; // 0x13
    ECollisionResponse GameTraceChannel7; // 0x14
    ECollisionResponse GameTraceChannel8; // 0x15
    ECollisionResponse GameTraceChannel9; // 0x16
    ECollisionResponse GameTraceChannel10; // 0x17
    ECollisionResponse GameTraceChannel11; // 0x18
    ECollisionResponse GameTraceChannel12; // 0x19
    ECollisionResponse GameTraceChannel13; // 0x1a
    ECollisionResponse GameTraceChannel14; // 0x1b
    ECollisionResponse GameTraceChannel15; // 0x1c
    ECollisionResponse GameTraceChannel16; // 0x1d
    ECollisionResponse GameTraceChannel17; // 0x1e
    ECollisionResponse GameTraceChannel18; // 0x1f
}; // Size: 0x20
#pragma pack(pop)
