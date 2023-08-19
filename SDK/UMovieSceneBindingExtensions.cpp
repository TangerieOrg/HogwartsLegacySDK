#include "FGuid.hpp"
#include "FSequencerBindingProxy.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UMovieSceneBindingExtensions.hpp"
#include "UMovieSceneTrack.hpp"
#include "UObject.hpp"
void UMovieSceneBindingExtensions::MoveBindingContents(FSequencerBindingProxy& SourceBindingId, FSequencerBindingProxy& DestinationBindingId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents"));
    struct Params_MoveBindingContents {
        FSequencerBindingProxy SourceBindingId; // 0x0
        FSequencerBindingProxy DestinationBindingId; // 0x18
    }; // Size: 0x30
    Params_MoveBindingContents params{};
    params.SourceBindingId = (FSequencerBindingProxy)SourceBindingId;
    params.DestinationBindingId = (FSequencerBindingProxy)DestinationBindingId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SourceBindingId = params.SourceBindingId;
    DestinationBindingId = params.DestinationBindingId;
}
UMovieSceneBindingExtensions* UMovieSceneBindingExtensions::StaticClass() {
    static auto res = find_uobject("Class /Script/SequencerScripting.MovieSceneBindingExtensions");
    return (UMovieSceneBindingExtensions*)res;
}
void UMovieSceneBindingExtensions::SetDisplayName(FSequencerBindingProxy& InBinding) {}
void UMovieSceneBindingExtensions::SetParent(FSequencerBindingProxy& InBinding, FSequencerBindingProxy& InParentBinding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetParent"));
    struct Params_SetParent {
        FSequencerBindingProxy InBinding; // 0x0
        FSequencerBindingProxy InParentBinding; // 0x18
    }; // Size: 0x30
    Params_SetParent params{};
    params.InBinding = (FSequencerBindingProxy)InBinding;
    params.InParentBinding = (FSequencerBindingProxy)InParentBinding;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InBinding = params.InBinding;
    InParentBinding = params.InParentBinding;
}
void UMovieSceneBindingExtensions::SetName(FSequencerBindingProxy& InBinding, FString InName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneBindingExtensions.SetName"));
    struct Params_SetName {
        FSequencerBindingProxy InBinding; // 0x0
        FString InName; // 0x18
    }; // Size: 0x28
    Params_SetName params{};
    params.InBinding = (FSequencerBindingProxy)InBinding;
    params.InName = (FString)InName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InBinding = params.InBinding;
}
void UMovieSceneBindingExtensions::RemoveTrack(FSequencerBindingProxy& InBinding, UMovieSceneTrack* TrackToRemove) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneBindingExtensions.RemoveTrack"));
    struct Params_RemoveTrack {
        FSequencerBindingProxy InBinding; // 0x0
        UMovieSceneTrack* TrackToRemove; // 0x18
    }; // Size: 0x20
    Params_RemoveTrack params{};
    params.InBinding = (FSequencerBindingProxy)InBinding;
    params.TrackToRemove = (UMovieSceneTrack*)TrackToRemove;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InBinding = params.InBinding;
}
void UMovieSceneBindingExtensions::Remove(FSequencerBindingProxy& InBinding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneBindingExtensions.Remove"));
    struct Params_Remove {
        FSequencerBindingProxy InBinding; // 0x0
    }; // Size: 0x18
    Params_Remove params{};
    params.InBinding = (FSequencerBindingProxy)InBinding;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InBinding = params.InBinding;
}
bool UMovieSceneBindingExtensions::IsValid(FSequencerBindingProxy& InBinding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneBindingExtensions.IsValid"));
    struct Params_IsValid {
        FSequencerBindingProxy InBinding; // 0x0
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_IsValid params{};
    params.InBinding = (FSequencerBindingProxy)InBinding;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InBinding = params.InBinding;
    return (bool)params.ReturnValue;
}
UMovieSceneTrack* UMovieSceneBindingExtensions::AddTrack(FSequencerBindingProxy& InBinding, UClass* TrackType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneBindingExtensions.AddTrack"));
    struct Params_AddTrack {
        FSequencerBindingProxy InBinding; // 0x0
        UClass* TrackType; // 0x18
        UMovieSceneTrack* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_AddTrack params{};
    params.InBinding = (FSequencerBindingProxy)InBinding;
    params.TrackType = (UClass*)TrackType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InBinding = params.InBinding;
    return (UMovieSceneTrack*)params.ReturnValue;
}
TArray<UMovieSceneTrack*> UMovieSceneBindingExtensions::GetTracks(FSequencerBindingProxy& InBinding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetTracks"));
    struct Params_GetTracks {
        FSequencerBindingProxy InBinding; // 0x0
        TArray<UMovieSceneTrack*> ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetTracks params{};
    params.InBinding = (FSequencerBindingProxy)InBinding;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InBinding = params.InBinding;
    return (TArray<UMovieSceneTrack*>)params.ReturnValue;
}
UClass* UMovieSceneBindingExtensions::GetPossessedObjectClass(FSequencerBindingProxy& InBinding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass"));
    struct Params_GetPossessedObjectClass {
        FSequencerBindingProxy InBinding; // 0x0
        UClass* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_GetPossessedObjectClass params{};
    params.InBinding = (FSequencerBindingProxy)InBinding;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InBinding = params.InBinding;
    return (UClass*)params.ReturnValue;
}
FSequencerBindingProxy UMovieSceneBindingExtensions::GetParent(FSequencerBindingProxy& InBinding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetParent"));
    struct Params_GetParent {
        FSequencerBindingProxy InBinding; // 0x0
        FSequencerBindingProxy ReturnValue; // 0x18
    }; // Size: 0x30
    Params_GetParent params{};
    params.InBinding = (FSequencerBindingProxy)InBinding;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InBinding = params.InBinding;
    return (FSequencerBindingProxy)params.ReturnValue;
}
FString UMovieSceneBindingExtensions::GetName(FSequencerBindingProxy& InBinding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetName"));
    struct Params_GetName {
        FSequencerBindingProxy InBinding; // 0x0
        FString ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetName params{};
    params.InBinding = (FSequencerBindingProxy)InBinding;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InBinding = params.InBinding;
    return (FString)params.ReturnValue;
}
UObject* UMovieSceneBindingExtensions::GetObjectTemplate(FSequencerBindingProxy& InBinding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate"));
    struct Params_GetObjectTemplate {
        FSequencerBindingProxy InBinding; // 0x0
        UObject* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_GetObjectTemplate params{};
    params.InBinding = (FSequencerBindingProxy)InBinding;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InBinding = params.InBinding;
    return (UObject*)params.ReturnValue;
}
FGuid UMovieSceneBindingExtensions::GetId(FSequencerBindingProxy& InBinding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetId"));
    struct Params_GetId {
        FSequencerBindingProxy InBinding; // 0x0
        FGuid ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetId params{};
    params.InBinding = (FSequencerBindingProxy)InBinding;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InBinding = params.InBinding;
    return (FGuid)params.ReturnValue;
}
void UMovieSceneBindingExtensions::GetDisplayName(FSequencerBindingProxy& InBinding) {}
TArray<FSequencerBindingProxy> UMovieSceneBindingExtensions::GetChildPossessables(FSequencerBindingProxy& InBinding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables"));
    struct Params_GetChildPossessables {
        FSequencerBindingProxy InBinding; // 0x0
        TArray<FSequencerBindingProxy> ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetChildPossessables params{};
    params.InBinding = (FSequencerBindingProxy)InBinding;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InBinding = params.InBinding;
    return (TArray<FSequencerBindingProxy>)params.ReturnValue;
}
TArray<UMovieSceneTrack*> UMovieSceneBindingExtensions::FindTracksByType(FSequencerBindingProxy& InBinding, UClass* TrackType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneBindingExtensions.FindTracksByType"));
    struct Params_FindTracksByType {
        FSequencerBindingProxy InBinding; // 0x0
        UClass* TrackType; // 0x18
        TArray<UMovieSceneTrack*> ReturnValue; // 0x20
    }; // Size: 0x30
    Params_FindTracksByType params{};
    params.InBinding = (FSequencerBindingProxy)InBinding;
    params.TrackType = (UClass*)TrackType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InBinding = params.InBinding;
    return (TArray<UMovieSceneTrack*>)params.ReturnValue;
}
TArray<UMovieSceneTrack*> UMovieSceneBindingExtensions::FindTracksByExactType(FSequencerBindingProxy& InBinding, UClass* TrackType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType"));
    struct Params_FindTracksByExactType {
        FSequencerBindingProxy InBinding; // 0x0
        UClass* TrackType; // 0x18
        TArray<UMovieSceneTrack*> ReturnValue; // 0x20
    }; // Size: 0x30
    Params_FindTracksByExactType params{};
    params.InBinding = (FSequencerBindingProxy)InBinding;
    params.TrackType = (UClass*)TrackType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InBinding = params.InBinding;
    return (TArray<UMovieSceneTrack*>)params.ReturnValue;
}
