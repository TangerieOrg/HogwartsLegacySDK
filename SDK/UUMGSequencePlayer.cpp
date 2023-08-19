#include "FMovieSceneRootEvaluationTemplateInstance.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
FName UUMGSequencePlayer::GetUserTag() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UMGSequencePlayer.GetUserTag"));
    struct Params_GetUserTag {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetUserTag params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
UUMGSequencePlayer* UUMGSequencePlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.UMGSequencePlayer");
    return (UUMGSequencePlayer*)res;
}
void UUMGSequencePlayer::SetUserTag(FName InUserTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.UMGSequencePlayer.SetUserTag"));
    struct Params_SetUserTag {
        FName InUserTag; // 0x0
    }; // Size: 0x8
    Params_SetUserTag params{};
    params.InUserTag = (FName)InUserTag;
    ProcessEvent(func, &params);
}
