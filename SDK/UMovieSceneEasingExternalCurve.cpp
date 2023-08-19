#include "UCurveFloat.hpp"
#include "UMovieSceneEasingExternalCurve.hpp"
#include "UObject.hpp"
UMovieSceneEasingExternalCurve* UMovieSceneEasingExternalCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneEasingExternalCurve");
    return (UMovieSceneEasingExternalCurve*)res;
}
