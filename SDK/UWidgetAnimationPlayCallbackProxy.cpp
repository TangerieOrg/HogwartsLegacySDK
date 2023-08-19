#include "EUMGSequencePlayMode\Type.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
#include "UWidgetAnimationPlayCallbackProxy.hpp"
UWidgetAnimationPlayCallbackProxy* UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationProxyObject(UUMGSequencePlayer*& Result, UUserWidget* Widget, UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode::Type PlayMode, float PlaybackSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject"));
    struct Params_CreatePlayAnimationProxyObject {
        UUMGSequencePlayer* Result; // 0x0
        UUserWidget* Widget; // 0x8
        UWidgetAnimation* InAnimation; // 0x10
        float StartAtTime; // 0x18
        int32_t NumLoopsToPlay; // 0x1c
        EUMGSequencePlayMode::Type PlayMode; // 0x20
        char pad_21[0x3];
        float PlaybackSpeed; // 0x24
        UWidgetAnimationPlayCallbackProxy* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_CreatePlayAnimationProxyObject params{};
    params.Result = (UUMGSequencePlayer*)Result;
    params.Widget = (UUserWidget*)Widget;
    params.InAnimation = (UWidgetAnimation*)InAnimation;
    params.StartAtTime = (float)StartAtTime;
    params.NumLoopsToPlay = (int32_t)NumLoopsToPlay;
    params.PlayMode = (EUMGSequencePlayMode::Type)PlayMode;
    params.PlaybackSpeed = (float)PlaybackSpeed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Result = params.Result;
    return (UWidgetAnimationPlayCallbackProxy*)params.ReturnValue;
}
UWidgetAnimationPlayCallbackProxy* UWidgetAnimationPlayCallbackProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.WidgetAnimationPlayCallbackProxy");
    return (UWidgetAnimationPlayCallbackProxy*)res;
}
UWidgetAnimationPlayCallbackProxy* UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationTimeRangeProxyObject(UUMGSequencePlayer*& Result, UUserWidget* Widget, UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode::Type PlayMode, float PlaybackSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject"));
    struct Params_CreatePlayAnimationTimeRangeProxyObject {
        UUMGSequencePlayer* Result; // 0x0
        UUserWidget* Widget; // 0x8
        UWidgetAnimation* InAnimation; // 0x10
        float StartAtTime; // 0x18
        float EndAtTime; // 0x1c
        int32_t NumLoopsToPlay; // 0x20
        EUMGSequencePlayMode::Type PlayMode; // 0x24
        char pad_25[0x3];
        float PlaybackSpeed; // 0x28
        char pad_2c[0x4];
        UWidgetAnimationPlayCallbackProxy* ReturnValue; // 0x30
    }; // Size: 0x38
    Params_CreatePlayAnimationTimeRangeProxyObject params{};
    params.Result = (UUMGSequencePlayer*)Result;
    params.Widget = (UUserWidget*)Widget;
    params.InAnimation = (UWidgetAnimation*)InAnimation;
    params.StartAtTime = (float)StartAtTime;
    params.EndAtTime = (float)EndAtTime;
    params.NumLoopsToPlay = (int32_t)NumLoopsToPlay;
    params.PlayMode = (EUMGSequencePlayMode::Type)PlayMode;
    params.PlaybackSpeed = (float)PlaybackSpeed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Result = params.Result;
    return (UWidgetAnimationPlayCallbackProxy*)params.ReturnValue;
}
