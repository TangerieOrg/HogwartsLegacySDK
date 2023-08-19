#include "UMovieSceneFloatPropertySystem.hpp"
#include "UMovieScenePropertySystem.hpp"
UMovieSceneFloatPropertySystem* UMovieSceneFloatPropertySystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneFloatPropertySystem");
    return (UMovieSceneFloatPropertySystem*)res;
}
