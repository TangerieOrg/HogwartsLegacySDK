#include "ALevelSequenceActor.hpp"
#include "FMovieSceneSequencePlaybackSettings.hpp"
#include "UCameraComponent.hpp"
#include "UFunction.hpp"
#include "ULevelSequence.hpp"
#include "ULevelSequencePlayer.hpp"
#include "UMovieSceneSequencePlayer.hpp"
#include "UObject.hpp"
ULevelSequencePlayer* ULevelSequencePlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/LevelSequence.LevelSequencePlayer");
    return (ULevelSequencePlayer*)res;
}
UCameraComponent* ULevelSequencePlayer::GetActiveCameraComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequencePlayer.GetActiveCameraComponent"));
    struct Params_GetActiveCameraComponent {
        UCameraComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetActiveCameraComponent params{};
    ProcessEvent(func, &params);
    return (UCameraComponent*)params.ReturnValue;
}
ULevelSequencePlayer* ULevelSequencePlayer::CreateLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, ALevelSequenceActor*& OutActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer"));
    struct Params_CreateLevelSequencePlayer {
        UObject* WorldContextObject; // 0x0
        ULevelSequence* LevelSequence; // 0x8
        FMovieSceneSequencePlaybackSettings Settings; // 0x10
        char pad_24[0x4];
        ALevelSequenceActor* OutActor; // 0x28
        ULevelSequencePlayer* ReturnValue; // 0x30
    }; // Size: 0x38
    Params_CreateLevelSequencePlayer params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.LevelSequence = (ULevelSequence*)LevelSequence;
    params.Settings = (FMovieSceneSequencePlaybackSettings)Settings;
    params.OutActor = (ALevelSequenceActor*)OutActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutActor = params.OutActor;
    return (ULevelSequencePlayer*)params.ReturnValue;
}
