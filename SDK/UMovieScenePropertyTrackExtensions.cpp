#include "UBlueprintFunctionLibrary.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UMovieSceneObjectPropertyTrack.hpp"
#include "UMovieScenePropertyTrack.hpp"
#include "UMovieScenePropertyTrackExtensions.hpp"
UMovieScenePropertyTrackExtensions* UMovieScenePropertyTrackExtensions::StaticClass() {
    static auto res = find_uobject("Class /Script/SequencerScripting.MovieScenePropertyTrackExtensions");
    return (UMovieScenePropertyTrackExtensions*)res;
}
FName UMovieScenePropertyTrackExtensions::GetUniqueTrackName(UMovieScenePropertyTrack* Track) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName"));
    struct Params_GetUniqueTrackName {
        UMovieScenePropertyTrack* Track; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetUniqueTrackName params{};
    params.Track = (UMovieScenePropertyTrack*)Track;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void UMovieScenePropertyTrackExtensions::SetPropertyNameAndPath(UMovieScenePropertyTrack* Track, FName& InPropertyName, FString InPropertyPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath"));
    struct Params_SetPropertyNameAndPath {
        UMovieScenePropertyTrack* Track; // 0x0
        FName InPropertyName; // 0x8
        FString InPropertyPath; // 0x10
    }; // Size: 0x20
    Params_SetPropertyNameAndPath params{};
    params.Track = (UMovieScenePropertyTrack*)Track;
    params.InPropertyName = (FName)InPropertyName;
    params.InPropertyPath = (FString)InPropertyPath;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InPropertyName = params.InPropertyName;
}
void UMovieScenePropertyTrackExtensions::SetObjectPropertyClass(UMovieSceneObjectPropertyTrack* Track, UClass* PropertyClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass"));
    struct Params_SetObjectPropertyClass {
        UMovieSceneObjectPropertyTrack* Track; // 0x0
        UClass* PropertyClass; // 0x8
    }; // Size: 0x10
    Params_SetObjectPropertyClass params{};
    params.Track = (UMovieSceneObjectPropertyTrack*)Track;
    params.PropertyClass = (UClass*)PropertyClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FString UMovieScenePropertyTrackExtensions::GetPropertyPath(UMovieScenePropertyTrack* Track) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath"));
    struct Params_GetPropertyPath {
        UMovieScenePropertyTrack* Track; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetPropertyPath params{};
    params.Track = (UMovieScenePropertyTrack*)Track;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FName UMovieScenePropertyTrackExtensions::GetPropertyName(UMovieScenePropertyTrack* Track) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName"));
    struct Params_GetPropertyName {
        UMovieScenePropertyTrack* Track; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetPropertyName params{};
    params.Track = (UMovieScenePropertyTrack*)Track;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
UClass* UMovieScenePropertyTrackExtensions::GetObjectPropertyClass(UMovieSceneObjectPropertyTrack* Track) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass"));
    struct Params_GetObjectPropertyClass {
        UMovieSceneObjectPropertyTrack* Track; // 0x0
        UClass* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetObjectPropertyClass params{};
    params.Track = (UMovieSceneObjectPropertyTrack*)Track;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UClass*)params.ReturnValue;
}
