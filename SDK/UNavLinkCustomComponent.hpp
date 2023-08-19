#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "ENavLinkDirection\Type.hpp"
#include "FNavAgentSelector.hpp"
#include "FVector.hpp"
#include "UNavRelevantComponent.hpp"
class UClass;
#pragma pack(push, 1)
class UNavLinkCustomComponent : public UNavRelevantComponent {
public:
    char pad_f8[0x8];
    uint32_t NavLinkUserId; // 0x100
    char pad_104[0x4];
    UClass* EnabledAreaClass; // 0x108
    UClass* DisabledAreaClass; // 0x110
    FNavAgentSelector SupportedAgents; // 0x118
    FVector LinkRelativeStart; // 0x11c
    FVector LinkRelativeEnd; // 0x128
    ENavLinkDirection::Type LinkDirection; // 0x134
    char pad_135[0x3];
    uint8_t bLinkEnabled : 1; // 0x138
    uint8_t bNotifyWhenEnabled : 1; // 0x138
    uint8_t bNotifyWhenDisabled : 1; // 0x138
    uint8_t bCreateBoxObstacle : 1; // 0x138
    uint8_t pad_bitfield_138_4 : 4;
    char pad_139[0x3];
    FVector ObstacleOffset; // 0x13c
    FVector ObstacleExtent; // 0x148
    char pad_154[0x4];
    UClass* ObstacleAreaClass; // 0x158
    float BroadcastRadius; // 0x160
    float BroadcastInterval; // 0x164
    ECollisionChannel BroadcastChannel; // 0x168
    char pad_169[0x3f];
    static UNavLinkCustomComponent* StaticClass();
}; // Size: 0x1a8
#pragma pack(pop)
