#include "AActor.hpp"
#include "ATemplateSequenceActor.hpp"
#include "FMovieSceneSequencePlaybackSettings.hpp"
#include "FSoftObjectPath.hpp"
#include "FTemplateSequenceBindingOverrideData.hpp"
#include "UFunction.hpp"
#include "UTemplateSequence.hpp"
#include "UTemplateSequencePlayer.hpp"
UTemplateSequence* ATemplateSequenceActor::LoadSequence() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TemplateSequence.TemplateSequenceActor.LoadSequence"));
    struct Params_LoadSequence {
        UTemplateSequence* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_LoadSequence params{};
    ProcessEvent(func, &params);
    return (UTemplateSequence*)params.ReturnValue;
}
void ATemplateSequenceActor::SetBinding(AActor* Actor, bool bOverridesDefault) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TemplateSequence.TemplateSequenceActor.SetBinding"));
    struct Params_SetBinding {
        AActor* Actor; // 0x0
        bool bOverridesDefault; // 0x8
    }; // Size: 0x9
    Params_SetBinding params{};
    params.Actor = (AActor*)Actor;
    params.bOverridesDefault = (bool)bOverridesDefault;
    ProcessEvent(func, &params);
}
ATemplateSequenceActor* ATemplateSequenceActor::StaticClass() {
    static auto res = find_uobject("Class /Script/TemplateSequence.TemplateSequenceActor");
    return (ATemplateSequenceActor*)res;
}
void ATemplateSequenceActor::SetSequence(UTemplateSequence* InSequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/TemplateSequence.TemplateSequenceActor.SetSequence"));
    struct Params_SetSequence {
        UTemplateSequence* InSequence; // 0x0
    }; // Size: 0x8
    Params_SetSequence params{};
    params.InSequence = (UTemplateSequence*)InSequence;
    ProcessEvent(func, &params);
}
UTemplateSequencePlayer* ATemplateSequenceActor::GetSequencePlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TemplateSequence.TemplateSequenceActor.GetSequencePlayer"));
    struct Params_GetSequencePlayer {
        UTemplateSequencePlayer* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSequencePlayer params{};
    ProcessEvent(func, &params);
    return (UTemplateSequencePlayer*)params.ReturnValue;
}
UTemplateSequence* ATemplateSequenceActor::GetSequence() {
    static auto func = (UFunction*)(find_uobject("Function /Script/TemplateSequence.TemplateSequenceActor.GetSequence"));
    struct Params_GetSequence {
        UTemplateSequence* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSequence params{};
    ProcessEvent(func, &params);
    return (UTemplateSequence*)params.ReturnValue;
}
