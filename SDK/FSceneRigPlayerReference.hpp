#pragma once
#include <cstdint>
class USceneRigPlayer;
#pragma pack(push, 1)
struct FSceneRigPlayerReference {
    USceneRigPlayer* Player; // 0x0
    char pad_8[0x8];
}; // Size: 0x10
#pragma pack(pop)
