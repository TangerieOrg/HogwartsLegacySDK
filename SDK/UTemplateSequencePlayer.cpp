#include "ATemplateSequenceActor.hpp"
#include "FMovieSceneSequencePlaybackSettings.hpp"
#include "UFunction.hpp"
#include "UMovieSceneSequencePlayer.hpp"
#include "UObject.hpp"
#include "UTemplateSequence.hpp"
#include "UTemplateSequencePlayer.hpp"
UTemplateSequencePlayer* UTemplateSequencePlayer::CreateTemplateSequencePlayer(UObject* WorldContextObject, UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, ATemplateSequenceActor*& OutActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer"));
    struct Params_CreateTemplateSequencePlayer {
        UObject* WorldContextObject; // 0x0
        UTemplateSequence* TemplateSequence; // 0x8
        FMovieSceneSequencePlaybackSettings Settings; // 0x10
        char pad_24[0x4];
        ATemplateSequenceActor* OutActor; // 0x28
        UTemplateSequencePlayer* ReturnValue; // 0x30
    }; // Size: 0x38
    Params_CreateTemplateSequencePlayer params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.TemplateSequence = (UTemplateSequence*)TemplateSequence;
    params.Settings = (FMovieSceneSequencePlaybackSettings)Settings;
    params.OutActor = (ATemplateSequenceActor*)OutActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutActor = params.OutActor;
    return (UTemplateSequencePlayer*)params.ReturnValue;
}
UTemplateSequencePlayer* UTemplateSequencePlayer::StaticClass() {
    static auto res = find_uobject("Class /Script/TemplateSequence.TemplateSequencePlayer");
    return (UTemplateSequencePlayer*)res;
}
