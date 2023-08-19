#include "UMovieSceneEntityInstantiatorSystem.hpp"
#include "UMovieSceneHierarchicalEasingInstantiatorSystem.hpp"
UMovieSceneHierarchicalEasingInstantiatorSystem* UMovieSceneHierarchicalEasingInstantiatorSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem");
    return (UMovieSceneHierarchicalEasingInstantiatorSystem*)res;
}
