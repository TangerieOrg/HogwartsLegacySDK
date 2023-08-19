#include "FTransform.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USceneActionState_PlayBinkMedia.hpp"
#include "USceneActionState_PlayFMV.hpp"
#include "USceneRigPlayer.hpp"
#include "UTimeRigPlayer.hpp"
#include "UUserWidget.hpp"
bool USceneRigPlayer::UpdateObjectParameter(FString ParameterName, UObject* Object) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigPlayer.UpdateObjectParameter"));
    struct Params_UpdateObjectParameter {
        FString ParameterName; // 0x0
        UObject* Object; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_UpdateObjectParameter params{};
    params.ParameterName = (FString)ParameterName;
    params.Object = (UObject*)Object;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
USceneRigPlayer* USceneRigPlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigPlayer");
    return (USceneRigPlayer*)res;
}
bool USceneRigPlayer::UpdateBoolParameter(FString ParameterName, bool InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigPlayer.UpdateBoolParameter"));
    struct Params_UpdateBoolParameter {
        FString ParameterName; // 0x0
        bool InValue; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_UpdateBoolParameter params{};
    params.ParameterName = (FString)ParameterName;
    params.InValue = (bool)InValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USceneRigPlayer::UpdateTransformParameter(FString ParameterName, FTransform& InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigPlayer.UpdateTransformParameter"));
    struct Params_UpdateTransformParameter {
        FString ParameterName; // 0x0
        FTransform InValue; // 0x10
        bool ReturnValue; // 0x40
    }; // Size: 0x41
    Params_UpdateTransformParameter params{};
    params.ParameterName = (FString)ParameterName;
    params.InValue = (FTransform)InValue;
    ProcessEvent(func, &params);
    InValue = params.InValue;
    return (bool)params.ReturnValue;
}
void USceneRigPlayer::ApplyParameterUpdatesImmediately() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigPlayer.ApplyParameterUpdatesImmediately"));
    struct Params_ApplyParameterUpdatesImmediately {
    }; // Size: 0x0
    Params_ApplyParameterUpdatesImmediately params{};
    ProcessEvent(func, &params);
}
bool USceneRigPlayer::UpdateFloatParameter(FString ParameterName, float InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigPlayer.UpdateFloatParameter"));
    struct Params_UpdateFloatParameter {
        FString ParameterName; // 0x0
        float InValue; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_UpdateFloatParameter params{};
    params.ParameterName = (FString)ParameterName;
    params.InValue = (float)InValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USceneRigPlayer::UpdateStringParameter(FString ParameterName, FString InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigPlayer.UpdateStringParameter"));
    struct Params_UpdateStringParameter {
        FString ParameterName; // 0x0
        FString InValue; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_UpdateStringParameter params{};
    params.ParameterName = (FString)ParameterName;
    params.InValue = (FString)InValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USceneRigPlayer::UpdateIntParameter(FString ParameterName, int32_t InValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigPlayer.UpdateIntParameter"));
    struct Params_UpdateIntParameter {
        FString ParameterName; // 0x0
        int32_t InValue; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_UpdateIntParameter params{};
    params.ParameterName = (FString)ParameterName;
    params.InValue = (int32_t)InValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USceneRigPlayer::ShowSkipUI(bool bShow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneRigPlayer.ShowSkipUI"));
    struct Params_ShowSkipUI {
        bool bShow; // 0x0
    }; // Size: 0x1
    Params_ShowSkipUI params{};
    params.bShow = (bool)bShow;
    ProcessEvent(func, &params);
}
