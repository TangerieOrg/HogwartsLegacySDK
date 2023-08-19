#include "APlayerState.hpp"
#include "FVoiceSettings.hpp"
#include "UActorComponent.hpp"
#include "UAudioComponent.hpp"
#include "UFunction.hpp"
#include "UVOIPTalker.hpp"
void UVOIPTalker::BPOnTalkingEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VOIPTalker.BPOnTalkingEnd"));
    struct Params_BPOnTalkingEnd {
    }; // Size: 0x0
    Params_BPOnTalkingEnd params{};
    ProcessEvent(func, &params);
}
UVOIPTalker* UVOIPTalker::CreateTalkerForPlayer(APlayerState* OwningState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VOIPTalker.CreateTalkerForPlayer"));
    struct Params_CreateTalkerForPlayer {
        APlayerState* OwningState; // 0x0
        UVOIPTalker* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_CreateTalkerForPlayer params{};
    params.OwningState = (APlayerState*)OwningState;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UVOIPTalker*)params.ReturnValue;
}
UVOIPTalker* UVOIPTalker::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.VOIPTalker");
    return (UVOIPTalker*)res;
}
void UVOIPTalker::RegisterWithPlayerState(APlayerState* OwningState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VOIPTalker.RegisterWithPlayerState"));
    struct Params_RegisterWithPlayerState {
        APlayerState* OwningState; // 0x0
    }; // Size: 0x8
    Params_RegisterWithPlayerState params{};
    params.OwningState = (APlayerState*)OwningState;
    ProcessEvent(func, &params);
}
float UVOIPTalker::GetVoiceLevel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VOIPTalker.GetVoiceLevel"));
    struct Params_GetVoiceLevel {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetVoiceLevel params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UVOIPTalker::BPOnTalkingBegin(UAudioComponent* AudioComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VOIPTalker.BPOnTalkingBegin"));
    struct Params_BPOnTalkingBegin {
        UAudioComponent* AudioComponent; // 0x0
    }; // Size: 0x8
    Params_BPOnTalkingBegin params{};
    params.AudioComponent = (UAudioComponent*)AudioComponent;
    ProcessEvent(func, &params);
}
