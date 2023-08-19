#include "FGuid.hpp"
#include "FMovieSceneObjectBindingID.hpp"
#include "UFunction.hpp"
#include "UMovieScene3DConstraintSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieScene3DConstraintSection* UMovieScene3DConstraintSection::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieScene3DConstraintSection");
    return (UMovieScene3DConstraintSection*)res;
}
FMovieSceneObjectBindingID UMovieScene3DConstraintSection::GetConstraintBindingID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID"));
    struct Params_GetConstraintBindingID {
        FMovieSceneObjectBindingID ReturnValue; // 0x0
    }; // Size: 0x18
    Params_GetConstraintBindingID params{};
    ProcessEvent(func, &params);
    return (FMovieSceneObjectBindingID)params.ReturnValue;
}
void UMovieScene3DConstraintSection::SetConstraintBindingID(FMovieSceneObjectBindingID& InConstraintBindingID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID"));
    struct Params_SetConstraintBindingID {
        FMovieSceneObjectBindingID InConstraintBindingID; // 0x0
    }; // Size: 0x18
    Params_SetConstraintBindingID params{};
    params.InConstraintBindingID = (FMovieSceneObjectBindingID)InConstraintBindingID;
    ProcessEvent(func, &params);
    InConstraintBindingID = params.InConstraintBindingID;
}
