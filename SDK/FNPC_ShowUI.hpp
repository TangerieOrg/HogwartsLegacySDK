#pragma once
#include <cstdint>
#include "ENPC_ShowUIPerceptionIndicatorMode.hpp"
#pragma pack(push, 1)
struct FNPC_ShowUI {
    bool bShowName; // 0x0
    bool bShowHealthBar; // 0x1
    bool bShowBadge; // 0x2
    bool bShowCallout; // 0x3
    bool bShowDamage; // 0x4
    bool bShowPerceptionIndicator; // 0x5
    ENPC_ShowUIPerceptionIndicatorMode ShowPerceptionIndicatorMode; // 0x6
    char pad_7[0x1];
    int32_t ShowMiniMapPerceptionCone; // 0x8
}; // Size: 0xc
#pragma pack(pop)
