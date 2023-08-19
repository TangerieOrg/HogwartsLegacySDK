#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class ALadder : public AActor {
public:
    bool bPlayerClimbingEnabled; // 0x248
    bool bPlayerMountTopEnabled; // 0x249
    char pad_24a[0x6];
    static ALadder* StaticClass();
    float GetMeshHeight();
    float GetLadderTopZ();
    int32_t GetLadderHeight();
    float GetLadderBottomZ();
    void EnablePlayerMountTop();
    void EnablePlayerClimbing();
    void DisablePlayerMountTop();
    void DisablePlayerClimbing();
    bool CanPlayerClimbLadder();
}; // Size: 0x250
#pragma pack(pop)
