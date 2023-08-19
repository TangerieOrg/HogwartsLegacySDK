#pragma once
#include <cstdint>
#include "FConversation_FinalTransformSettings.hpp"
#include "FConversation_InitialTransformSettings.hpp"
#pragma pack(push, 1)
struct FConversation_InteractionActorSettings {
    bool EnableInitialPositionOverride; // 0x0
    bool InitialPositionOverrideCheckGroundCollision; // 0x1
    bool InitialPositionOverrideCheckNavMesh; // 0x2
    bool EnableInitialPositionFromStationSockets; // 0x3
    bool InitialPositionFromStationSocketsCheckGroundCollision; // 0x4
    bool InitialPositionFromStationSocketsCheckNavMesh; // 0x5
    char pad_6[0x2];
    FConversation_InitialTransformSettings InitialTransformSettings; // 0x8
    FConversation_FinalTransformSettings FinalTransformSettings; // 0x18
}; // Size: 0x28
#pragma pack(pop)
