#include "AActor.hpp"
#include "FMovieSceneObjectBindingID.hpp"
#include "UFunction.hpp"
#include "ULevelSequenceDirector.hpp"
#include "ULevelSequencePlayer.hpp"
#include "UMovieSceneSequence.hpp"
#include "UObject.hpp"
ULevelSequenceDirector* ULevelSequenceDirector::StaticClass() {
    static auto res = find_uobject("Class /Script/LevelSequence.LevelSequenceDirector");
    return (ULevelSequenceDirector*)res;
}
UMovieSceneSequence* ULevelSequenceDirector::GetSequence() {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceDirector.GetSequence"));
    struct Params_GetSequence {
        UMovieSceneSequence* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSequence params{};
    ProcessEvent(func, &params);
    return (UMovieSceneSequence*)params.ReturnValue;
}
void ULevelSequenceDirector::OnCreated() {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceDirector.OnCreated"));
    struct Params_OnCreated {
    }; // Size: 0x0
    Params_OnCreated params{};
    ProcessEvent(func, &params);
}
TArray<AActor*> ULevelSequenceDirector::GetBoundActors(FMovieSceneObjectBindingID ObjectBinding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceDirector.GetBoundActors"));
    struct Params_GetBoundActors {
        FMovieSceneObjectBindingID ObjectBinding; // 0x0
        TArray<AActor*> ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetBoundActors params{};
    params.ObjectBinding = (FMovieSceneObjectBindingID)ObjectBinding;
    ProcessEvent(func, &params);
    return (TArray<AActor*>)params.ReturnValue;
}
UObject* ULevelSequenceDirector::GetBoundObject(FMovieSceneObjectBindingID ObjectBinding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceDirector.GetBoundObject"));
    struct Params_GetBoundObject {
        FMovieSceneObjectBindingID ObjectBinding; // 0x0
        UObject* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_GetBoundObject params{};
    params.ObjectBinding = (FMovieSceneObjectBindingID)ObjectBinding;
    ProcessEvent(func, &params);
    return (UObject*)params.ReturnValue;
}
TArray<UObject*> ULevelSequenceDirector::GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceDirector.GetBoundObjects"));
    struct Params_GetBoundObjects {
        FMovieSceneObjectBindingID ObjectBinding; // 0x0
        TArray<UObject*> ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetBoundObjects params{};
    params.ObjectBinding = (FMovieSceneObjectBindingID)ObjectBinding;
    ProcessEvent(func, &params);
    return (TArray<UObject*>)params.ReturnValue;
}
AActor* ULevelSequenceDirector::GetBoundActor(FMovieSceneObjectBindingID ObjectBinding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LevelSequence.LevelSequenceDirector.GetBoundActor"));
    struct Params_GetBoundActor {
        FMovieSceneObjectBindingID ObjectBinding; // 0x0
        AActor* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_GetBoundActor params{};
    params.ObjectBinding = (FMovieSceneObjectBindingID)ObjectBinding;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
