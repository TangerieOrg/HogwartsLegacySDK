#include "UBinkMediaPlayer.hpp"
#include "UFunction.hpp"
#include "USceneActionState_PlayBinkMedia.hpp"
#include "USceneRigActionState.hpp"
#include "UUserWidget.hpp"
void USceneActionState_PlayBinkMedia::OnMediaFailedToOpen() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneActionState_PlayBinkMedia.OnMediaFailedToOpen"));
    struct Params_OnMediaFailedToOpen {
    }; // Size: 0x0
    Params_OnMediaFailedToOpen params{};
    ProcessEvent(func, &params);
}
USceneActionState_PlayBinkMedia* USceneActionState_PlayBinkMedia::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_PlayBinkMedia");
    return (USceneActionState_PlayBinkMedia*)res;
}
void USceneActionState_PlayBinkMedia::OnMediaOpened(FString OpenedUrl) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneActionState_PlayBinkMedia.OnMediaOpened"));
    struct Params_OnMediaOpened {
        FString OpenedUrl; // 0x0
    }; // Size: 0x10
    Params_OnMediaOpened params{};
    params.OpenedUrl = (FString)OpenedUrl;
    ProcessEvent(func, &params);
}
