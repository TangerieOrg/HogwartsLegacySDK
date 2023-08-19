#include "FGuid.hpp"
#include "FMovieSceneObjectBindingID.hpp"
#include "FTransform.hpp"
#include "UFunction.hpp"
#include "UMovieSceneCameraCutSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneCameraCutSection* UMovieSceneCameraCutSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneCameraCutSection");
    return (UMovieSceneCameraCutSection*)res;
}
void UMovieSceneCameraCutSection::SetCameraBindingID(FMovieSceneObjectBindingID& InCameraBindingID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID"));
    struct Params_SetCameraBindingID {
        FMovieSceneObjectBindingID InCameraBindingID; // 0x0
    }; // Size: 0x18
    Params_SetCameraBindingID params{};
    params.InCameraBindingID = (FMovieSceneObjectBindingID)InCameraBindingID;
    ProcessEvent(func, &params);
    InCameraBindingID = params.InCameraBindingID;
}
FMovieSceneObjectBindingID UMovieSceneCameraCutSection::GetCameraBindingID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID"));
    struct Params_GetCameraBindingID {
        FMovieSceneObjectBindingID ReturnValue; // 0x0
    }; // Size: 0x18
    Params_GetCameraBindingID params{};
    ProcessEvent(func, &params);
    return (FMovieSceneObjectBindingID)params.ReturnValue;
}
