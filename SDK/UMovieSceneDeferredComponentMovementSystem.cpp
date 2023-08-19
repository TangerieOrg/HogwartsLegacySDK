#include "UMovieSceneDeferredComponentMovementSystem.hpp"
#include "UMovieSceneEntitySystem.hpp"
UMovieSceneDeferredComponentMovementSystem* UMovieSceneDeferredComponentMovementSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneDeferredComponentMovementSystem");
    return (UMovieSceneDeferredComponentMovementSystem*)res;
}
