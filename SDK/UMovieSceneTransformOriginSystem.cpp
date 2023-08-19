#include "UMovieSceneEntitySystem.hpp"
#include "UMovieSceneTransformOriginSystem.hpp"
UMovieSceneTransformOriginSystem* UMovieSceneTransformOriginSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneTransformOriginSystem");
    return (UMovieSceneTransformOriginSystem*)res;
}
