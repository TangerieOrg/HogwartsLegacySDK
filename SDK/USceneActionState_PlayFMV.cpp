#include "UFunction.hpp"
#include "UMediaPlayer.hpp"
#include "USceneActionState_PlayFMV.hpp"
#include "USceneRigActionState.hpp"
#include "UUserWidget.hpp"
USceneActionState_PlayFMV* USceneActionState_PlayFMV::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_PlayFMV");
    return (USceneActionState_PlayFMV*)res;
}
void USceneActionState_PlayFMV::OnMediaOpened(FString OpenedUrl) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneActionState_PlayFMV.OnMediaOpened"));
    struct Params_OnMediaOpened {
        FString OpenedUrl; // 0x0
    }; // Size: 0x10
    Params_OnMediaOpened params{};
    params.OpenedUrl = (FString)OpenedUrl;
    ProcessEvent(func, &params);
}
