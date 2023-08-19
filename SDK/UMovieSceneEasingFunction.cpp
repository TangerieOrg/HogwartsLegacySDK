#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UMovieSceneEasingFunction.hpp"
UMovieSceneEasingFunction* UMovieSceneEasingFunction::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneEasingFunction");
    return (UMovieSceneEasingFunction*)res;
}
float UMovieSceneEasingFunction::OnEvaluate(float Interp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MovieScene.MovieSceneEasingFunction.OnEvaluate"));
    struct Params_OnEvaluate {
        float Interp; // 0x0
        float ReturnValue; // 0x4
    }; // Size: 0x8
    Params_OnEvaluate params{};
    params.Interp = (float)Interp;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
