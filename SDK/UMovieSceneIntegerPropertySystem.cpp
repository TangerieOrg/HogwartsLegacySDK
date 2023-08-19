#include "UMovieSceneIntegerPropertySystem.hpp"
#include "UMovieScenePropertySystem.hpp"
UMovieSceneIntegerPropertySystem* UMovieSceneIntegerPropertySystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneIntegerPropertySystem");
    return (UMovieSceneIntegerPropertySystem*)res;
}
