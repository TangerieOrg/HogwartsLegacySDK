#include "UMovieSceneEntityInstantiatorSystem.hpp"
#include "UMovieSceneInitialValueSystem.hpp"
UMovieSceneInitialValueSystem* UMovieSceneInitialValueSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneInitialValueSystem");
    return (UMovieSceneInitialValueSystem*)res;
}
