#pragma once
#include <cstdint>
#include "FWidgetAnimationBinding.hpp"
#include "UMovieSceneSequence.hpp"
class UMovieScene;
class UUserWidget;
#pragma pack(push, 1)
class UWidgetAnimation : public UMovieSceneSequence {
public:
    UMovieScene* MovieScene; // 0x60
    TArray<FWidgetAnimationBinding> AnimationBindings; // 0x68
    bool bLegacyFinishOnStop; // 0x78
    char pad_79[0x7];
    FString DisplayLabel; // 0x80
    static UWidgetAnimation* StaticClass();
    void UnbindFromAnimationStarted(UUserWidget* Widget);
    void UnbindFromAnimationFinished(UUserWidget* Widget);
    void UnbindAllFromAnimationStarted(UUserWidget* Widget);
    void UnbindAllFromAnimationFinished(UUserWidget* Widget);
    float GetStartTime();
    float GetEndTime();
    void BindToAnimationStarted(UUserWidget* Widget);
    void BindToAnimationFinished(UUserWidget* Widget);
}; // Size: 0x90
#pragma pack(pop)
