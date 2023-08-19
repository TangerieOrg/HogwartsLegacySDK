#include "UMovieSceneEulerTransformPropertySystem.hpp"
#include "UMovieScenePropertySystem.hpp"
UMovieSceneEulerTransformPropertySystem* UMovieSceneEulerTransformPropertySystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneEulerTransformPropertySystem");
    return (UMovieSceneEulerTransformPropertySystem*)res;
}
