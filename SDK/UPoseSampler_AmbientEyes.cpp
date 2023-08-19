#include "UFunction.hpp"
#include "UPoseSampler.hpp"
#include "UPoseSampler_AmbientEyes.hpp"
UPoseSampler_AmbientEyes* UPoseSampler_AmbientEyes::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.PoseSampler_AmbientEyes");
    return (UPoseSampler_AmbientEyes*)res;
}
void UPoseSampler_AmbientEyes::OnDialogueLineAnimStarted(FName DialogueID, float WorldTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.PoseSampler_AmbientEyes.OnDialogueLineAnimStarted"));
    struct Params_OnDialogueLineAnimStarted {
        FName DialogueID; // 0x0
        float WorldTime; // 0x8
    }; // Size: 0xc
    Params_OnDialogueLineAnimStarted params{};
    params.DialogueID = (FName)DialogueID;
    params.WorldTime = (float)WorldTime;
    ProcessEvent(func, &params);
}
void UPoseSampler_AmbientEyes::OnDialogueLineAnimFinished(bool bCancelled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.PoseSampler_AmbientEyes.OnDialogueLineAnimFinished"));
    struct Params_OnDialogueLineAnimFinished {
        bool bCancelled; // 0x0
    }; // Size: 0x1
    Params_OnDialogueLineAnimFinished params{};
    params.bCancelled = (bool)bCancelled;
    ProcessEvent(func, &params);
}
