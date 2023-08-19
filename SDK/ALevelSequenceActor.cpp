#include "AActor.hpp"
#include "ALevelSequenceActor.hpp"
#include "FLevelSequenceCameraSettings.hpp"
#include "FMovieSceneObjectBindingID.hpp"
#include "FMovieSceneSequencePlaybackSettings.hpp"
#include "FSoftObjectPath.hpp"
#include "UFunction.hpp"
#include "ULevelSequence.hpp"
#include "ULevelSequenceBurnIn.hpp"
#include "ULevelSequenceBurnInOptions.hpp"
#include "ULevelSequencePlayer.hpp"
#include "UMovieSceneBindingOverrides.hpp"
#include "UObject.hpp"
void ALevelSequenceActor::ResetBinding(FMovieSceneObjectBindingID Binding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceActor.ResetBinding"));
    struct Params_ResetBinding {
        FMovieSceneObjectBindingID Binding; // 0x0
    }; // Size: 0x18
    Params_ResetBinding params{};
    params.Binding = (FMovieSceneObjectBindingID)Binding;
    ProcessEvent(func, &params);
}
ALevelSequenceActor* ALevelSequenceActor::StaticClass() {
    static auto res = find_uobject("Class /Script/LevelSequence.LevelSequenceActor");
    return (ALevelSequenceActor*)res;
}
void ALevelSequenceActor::SetBindingByTag(FName BindingTag, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceActor.SetBindingByTag"));
    struct Params_SetBindingByTag {
        FName BindingTag; // 0x0
        TArray<AActor*> Actors; // 0x8
        bool bAllowBindingsFromAsset; // 0x18
    }; // Size: 0x19
    Params_SetBindingByTag params{};
    params.BindingTag = (FName)BindingTag;
    params.Actors = (TArray<AActor*>)Actors;
    params.bAllowBindingsFromAsset = (bool)bAllowBindingsFromAsset;
    ProcessEvent(func, &params);
    Actors = params.Actors;
}
void ALevelSequenceActor::RemoveBinding(FMovieSceneObjectBindingID Binding, AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceActor.RemoveBinding"));
    struct Params_RemoveBinding {
        FMovieSceneObjectBindingID Binding; // 0x0
        AActor* Actor; // 0x18
    }; // Size: 0x20
    Params_RemoveBinding params{};
    params.Binding = (FMovieSceneObjectBindingID)Binding;
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
void ALevelSequenceActor::ShowBurnin() {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceActor.ShowBurnin"));
    struct Params_ShowBurnin {
    }; // Size: 0x0
    Params_ShowBurnin params{};
    ProcessEvent(func, &params);
}
void ALevelSequenceActor::SetSequence(ULevelSequence* InSequence) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceActor.SetSequence"));
    struct Params_SetSequence {
        ULevelSequence* InSequence; // 0x0
    }; // Size: 0x8
    Params_SetSequence params{};
    params.InSequence = (ULevelSequence*)InSequence;
    ProcessEvent(func, &params);
}
void ALevelSequenceActor::SetReplicatePlayback(bool ReplicatePlayback) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceActor.SetReplicatePlayback"));
    struct Params_SetReplicatePlayback {
        bool ReplicatePlayback; // 0x0
    }; // Size: 0x1
    Params_SetReplicatePlayback params{};
    params.ReplicatePlayback = (bool)ReplicatePlayback;
    ProcessEvent(func, &params);
}
void ALevelSequenceActor::SetBinding(FMovieSceneObjectBindingID Binding, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceActor.SetBinding"));
    struct Params_SetBinding {
        FMovieSceneObjectBindingID Binding; // 0x0
        TArray<AActor*> Actors; // 0x18
        bool bAllowBindingsFromAsset; // 0x28
    }; // Size: 0x29
    Params_SetBinding params{};
    params.Binding = (FMovieSceneObjectBindingID)Binding;
    params.Actors = (TArray<AActor*>)Actors;
    params.bAllowBindingsFromAsset = (bool)bAllowBindingsFromAsset;
    ProcessEvent(func, &params);
    Actors = params.Actors;
}
void ALevelSequenceActor::ResetBindings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceActor.ResetBindings"));
    struct Params_ResetBindings {
    }; // Size: 0x0
    Params_ResetBindings params{};
    ProcessEvent(func, &params);
}
FMovieSceneObjectBindingID ALevelSequenceActor::FindNamedBinding(FName Tag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceActor.FindNamedBinding"));
    struct Params_FindNamedBinding {
        FName Tag; // 0x0
        FMovieSceneObjectBindingID ReturnValue; // 0x8
    }; // Size: 0x20
    Params_FindNamedBinding params{};
    params.Tag = (FName)Tag;
    ProcessEvent(func, &params);
    return (FMovieSceneObjectBindingID)params.ReturnValue;
}
void ALevelSequenceActor::HideBurnin() {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceActor.HideBurnin"));
    struct Params_HideBurnin {
    }; // Size: 0x0
    Params_HideBurnin params{};
    ProcessEvent(func, &params);
}
void ALevelSequenceActor::RemoveBindingByTag(FName Tag, AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceActor.RemoveBindingByTag"));
    struct Params_RemoveBindingByTag {
        FName Tag; // 0x0
        AActor* Actor; // 0x8
    }; // Size: 0x10
    Params_RemoveBindingByTag params{};
    params.Tag = (FName)Tag;
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
ULevelSequencePlayer* ALevelSequenceActor::GetSequencePlayer() {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceActor.GetSequencePlayer"));
    struct Params_GetSequencePlayer {
        ULevelSequencePlayer* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSequencePlayer params{};
    ProcessEvent(func, &params);
    return (ULevelSequencePlayer*)params.ReturnValue;
}
void ALevelSequenceActor::OnLevelSequenceLoaded__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature"));
    struct Params_OnLevelSequenceLoaded__DelegateSignature {
    }; // Size: 0x0
    Params_OnLevelSequenceLoaded__DelegateSignature params{};
    ProcessEvent(func, &params);
}
ULevelSequence* ALevelSequenceActor::LoadSequence() {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceActor.LoadSequence"));
    struct Params_LoadSequence {
        ULevelSequence* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_LoadSequence params{};
    ProcessEvent(func, &params);
    return (ULevelSequence*)params.ReturnValue;
}
ULevelSequence* ALevelSequenceActor::GetSequence() {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceActor.GetSequence"));
    struct Params_GetSequence {
        ULevelSequence* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSequence params{};
    ProcessEvent(func, &params);
    return (ULevelSequence*)params.ReturnValue;
}
TArray<FMovieSceneObjectBindingID> ALevelSequenceActor::FindNamedBindings(FName Tag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceActor.FindNamedBindings"));
    struct Params_FindNamedBindings {
        FName Tag; // 0x0
        TArray<FMovieSceneObjectBindingID> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_FindNamedBindings params{};
    params.Tag = (FName)Tag;
    ProcessEvent(func, &params);
    return (TArray<FMovieSceneObjectBindingID>)params.ReturnValue;
}
void ALevelSequenceActor::AddBindingByTag(FName BindingTag, AActor* Actor, bool bAllowBindingsFromAsset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceActor.AddBindingByTag"));
    struct Params_AddBindingByTag {
        FName BindingTag; // 0x0
        AActor* Actor; // 0x8
        bool bAllowBindingsFromAsset; // 0x10
    }; // Size: 0x11
    Params_AddBindingByTag params{};
    params.BindingTag = (FName)BindingTag;
    params.Actor = (AActor*)Actor;
    params.bAllowBindingsFromAsset = (bool)bAllowBindingsFromAsset;
    ProcessEvent(func, &params);
}
void ALevelSequenceActor::AddBinding(FMovieSceneObjectBindingID Binding, AActor* Actor, bool bAllowBindingsFromAsset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceActor.AddBinding"));
    struct Params_AddBinding {
        FMovieSceneObjectBindingID Binding; // 0x0
        AActor* Actor; // 0x18
        bool bAllowBindingsFromAsset; // 0x20
    }; // Size: 0x21
    Params_AddBinding params{};
    params.Binding = (FMovieSceneObjectBindingID)Binding;
    params.Actor = (AActor*)Actor;
    params.bAllowBindingsFromAsset = (bool)bAllowBindingsFromAsset;
    ProcessEvent(func, &params);
}
