#pragma once
#include <cstdint>
#include "EUMGSequencePlayMode\Type.hpp"
#include "UObject.hpp"
class UUMGSequencePlayer;
class UWidgetAnimation;
class UUserWidget;
#pragma pack(push, 1)
class UWidgetAnimationPlayCallbackProxy : public UObject {
public:
    char pad_28[0x20];
    static UWidgetAnimationPlayCallbackProxy* StaticClass();
    static UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(UUMGSequencePlayer*& Result, UUserWidget* Widget, UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode::Type PlayMode, float PlaybackSpeed);
    static UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(UUMGSequencePlayer*& Result, UUserWidget* Widget, UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode::Type PlayMode, float PlaybackSpeed);
}; // Size: 0x48
#pragma pack(pop)
