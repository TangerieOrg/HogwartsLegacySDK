#pragma once
#include <cstdint>
#include "FMargin.hpp"
#include "FSlateWidgetStyle.hpp"
#include "FTableRowStyle.hpp"
#include "FTextBlockStyle.hpp"
#pragma pack(push, 1)
struct FAbleHUDStyle : public FSlateWidgetStyle {
    FTextBlockStyle CurrentActorTextStyle; // 0x8
    FTextBlockStyle FootPlantTextStyle; // 0x278
    FTextBlockStyle ChannelTextStyle; // 0x4e8
    FTextBlockStyle AbilityTextStyle; // 0x758
    FTextBlockStyle AnimationTextStyle; // 0x9c8
    FTextBlockStyle AnimationBlendTextStyle; // 0xc38
    FTextBlockStyle BlendInputTextStyle; // 0xea8
    FTextBlockStyle PlayRateTextStyle; // 0x1118
    FTextBlockStyle AdditiveTextStyle; // 0x1388
    FTextBlockStyle BlendWeightTextStyle; // 0x15f8
    FTextBlockStyle RootMotionTextStyle; // 0x1868
    FTextBlockStyle AssetLengthTextStyle; // 0x1ad8
    FTextBlockStyle GameplayTagTextStyle; // 0x1d48
    FTextBlockStyle ActorTagTextStyle; // 0x1fb8
    FTableRowStyle TreeRowStyle; // 0x2228
    FMargin HUDMargin; // 0x29f0
    FMargin TreeMargin; // 0x2a00
    FTextBlockStyle AnimationInfoTextStyle; // 0x2a10
}; // Size: 0x2c80
#pragma pack(pop)
