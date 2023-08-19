#include "UMovieSceneEntityInstantiatorSystem.hpp"
#include "UMovieSceneHierarchicalBiasSystem.hpp"
UMovieSceneHierarchicalBiasSystem* UMovieSceneHierarchicalBiasSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneHierarchicalBiasSystem");
    return (UMovieSceneHierarchicalBiasSystem*)res;
}
