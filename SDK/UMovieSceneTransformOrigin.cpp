#include "FTransform.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UMovieSceneTransformOrigin.hpp"
UMovieSceneTransformOrigin* UMovieSceneTransformOrigin::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneTransformOrigin");
    return (UMovieSceneTransformOrigin*)res;
}
FTransform UMovieSceneTransformOrigin::BP_GetTransformOrigin() {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin"));
    struct Params_BP_GetTransformOrigin {
        FTransform ReturnValue; // 0x0
    }; // Size: 0x30
    Params_BP_GetTransformOrigin params{};
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
