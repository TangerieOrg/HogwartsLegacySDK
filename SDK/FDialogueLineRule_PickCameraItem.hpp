#pragma once
#include <cstdint>
class UActorProvider;
#pragma pack(push, 1)
struct FDialogueLineRule_PickCameraItem {
    UActorProvider* Camera; // 0x0
    float weight; // 0x8
    char pad_c[0x4];
}; // Size: 0x10
#pragma pack(pop)
