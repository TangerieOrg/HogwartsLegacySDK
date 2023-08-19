#pragma once
#include <cstdint>
#include "FGroundSwarmingCurlNoiseParameters.hpp"
class UAkAudioEvent;
#pragma pack(push, 1)
struct FGroundSwarmingParameters {
    float GravityFactor; // 0x0
    float Follow; // 0x4
    float Separation; // 0x8
    float SeparationDistance; // 0xc
    float Alignment; // 0x10
    float Cohesion; // 0x14
    float FollowLag; // 0x18
    float MaxSpeed; // 0x1c
    FGroundSwarmingCurlNoiseParameters CurlNoise; // 0x20
    float CurlNoiseScale; // 0x38
    char pad_3c[0x4];
    UAkAudioEvent* MemberSfxLoop; // 0x40
    int32_t MaxMembersWithSFXLoop; // 0x48
    bool bAlignToVelocity; // 0x4c
    char pad_4d[0x3];
}; // Size: 0x50
#pragma pack(pop)
