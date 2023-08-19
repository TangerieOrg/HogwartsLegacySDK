#include "AActor.hpp"
#include "ALevelSequenceActor.hpp"
#include "ALevelSequenceMediaController.hpp"
#include "UFunction.hpp"
#include "UMediaComponent.hpp"
void ALevelSequenceMediaController::OnRep_ServerStartTimeSeconds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds"));
    struct Params_OnRep_ServerStartTimeSeconds {
    }; // Size: 0x0
    Params_OnRep_ServerStartTimeSeconds params{};
    ProcessEvent(func, &params);
}
ALevelSequenceMediaController* ALevelSequenceMediaController::StaticClass() {
    static auto res = find_uobject("Class /Script/LevelSequence.LevelSequenceMediaController");
    return (ALevelSequenceMediaController*)res;
}
void ALevelSequenceMediaController::Play() {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceMediaController.Play"));
    struct Params_Play {
    }; // Size: 0x0
    Params_Play params{};
    ProcessEvent(func, &params);
}
void ALevelSequenceMediaController::SynchronizeToServer(float DesyncThresholdSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceMediaController.SynchronizeToServer"));
    struct Params_SynchronizeToServer {
        float DesyncThresholdSeconds; // 0x0
    }; // Size: 0x4
    Params_SynchronizeToServer params{};
    params.DesyncThresholdSeconds = (float)DesyncThresholdSeconds;
    ProcessEvent(func, &params);
}
ALevelSequenceActor* ALevelSequenceMediaController::GetSequence() {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceMediaController.GetSequence"));
    struct Params_GetSequence {
        ALevelSequenceActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSequence params{};
    ProcessEvent(func, &params);
    return (ALevelSequenceActor*)params.ReturnValue;
}
UMediaComponent* ALevelSequenceMediaController::GetMediaComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceMediaController.GetMediaComponent"));
    struct Params_GetMediaComponent {
        UMediaComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMediaComponent params{};
    ProcessEvent(func, &params);
    return (UMediaComponent*)params.ReturnValue;
}
