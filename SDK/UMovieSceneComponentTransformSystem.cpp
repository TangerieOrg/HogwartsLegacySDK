#include "UMovieSceneComponentTransformSystem.hpp"
#include "UMovieScenePropertySystem.hpp"
UMovieSceneComponentTransformSystem* UMovieSceneComponentTransformSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneComponentTransformSystem");
    return (UMovieSceneComponentTransformSystem*)res;
}
