#pragma once
#include <cstdint>
#include "ELinkType.hpp"
#include "FOdcFlags.hpp"
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class UOdcNavLinkComponent : public USceneComponent {
public:
    FOdcFlags ForwardLinkUsageFlags; // 0x220
    FOdcFlags BackwardLinkUsageFlags; // 0x224
    bool Bidirectional; // 0x228
    char pad_229[0x3];
    float Cost; // 0x22c
    float MustUseDist; // 0x230
    int32_t MaxSimultaneous; // 0x234
    float DelayBeforeNextUser; // 0x238
    char pad_23c[0x44];
    static UOdcNavLinkComponent* StaticClass();
}; // Size: 0x280
#pragma pack(pop)
