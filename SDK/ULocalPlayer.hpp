#pragma once
#include <cstdint>
#include "EAspectRatioAxisConstraint.hpp"
#include "UPlayer.hpp"
class UGameViewportClient;
class UClass;
#pragma pack(push, 1)
class ULocalPlayer : public UPlayer {
public:
    char pad_48[0x28];
    UGameViewportClient* ViewportClient; // 0x70
    char pad_78[0x1c];
    EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x94
    char pad_95[0x3];
    UClass* PendingLevelPlayerControllerClass; // 0x98
    uint8_t bSentSplitJoin : 1; // 0xa0
    uint8_t pad_bitfield_a0_1 : 7;
    char pad_a1[0x17];
    int32_t ControllerId; // 0xb8
    char pad_bc[0x19c];
    static ULocalPlayer* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
