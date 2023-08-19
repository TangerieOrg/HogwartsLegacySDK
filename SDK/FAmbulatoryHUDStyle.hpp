#pragma once
#include <cstdint>
#include "FMargin.hpp"
#include "FSlateWidgetStyle.hpp"
#include "FTableRowStyle.hpp"
#include "FTextBlockStyle.hpp"
#pragma pack(push, 1)
struct FAmbulatoryHUDStyle : public FSlateWidgetStyle {
    FTextBlockStyle CurrentActorTextStyle; // 0x8
    FTextBlockStyle ImpulseTextStyle; // 0x278
    FTextBlockStyle PendingLinearTextStyle; // 0x4e8
    FTextBlockStyle LinearVelocityTextStyle; // 0x758
    FTextBlockStyle MovementComponentVelocityTextStyle; // 0x9c8
    FTextBlockStyle MovementModeTextStyle; // 0xc38
    FTextBlockStyle OverrideRootMotionTextStyle; // 0xea8
    FTextBlockStyle HasRootMotionTextStyle; // 0x1118
    FTextBlockStyle PerforminatorTextStyle; // 0x1388
    FTextBlockStyle DampingTextStyle; // 0x15f8
    FTextBlockStyle AtRestTextStyle; // 0x1868
    FTableRowStyle TreeRowStyle; // 0x1ad8
    FMargin HUDMargin; // 0x22a0
    FMargin TreeMargin; // 0x22b0
}; // Size: 0x22c0
#pragma pack(pop)
