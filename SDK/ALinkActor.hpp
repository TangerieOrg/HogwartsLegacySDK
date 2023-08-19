#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ELinkType.hpp"
#include "FOdcFlags.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
class ALinkActor : public AActor {
public:
    ELinkType LinkType; // 0x248
    char pad_249[0x3];
    int32_t NavLayers; // 0x24c
    FOdcFlags ForwardLinkUsageFlags; // 0x250
    FOdcFlags BackwardLinkUsageFlags; // 0x254
    bool Bidirectional; // 0x258
    char pad_259[0x3];
    float Cost; // 0x25c
    float MustUseDist; // 0x260
    int32_t MaxSimultaneous; // 0x264
    float DelayBeforeNextUser; // 0x268
    char pad_26c[0xc];
    FVector LinkStartPos; // 0x278
    FVector LinkEndPos; // 0x284
    char pad_290[0x40];
    static ALinkActor* StaticClass();
}; // Size: 0x2d0
#pragma pack(pop)
