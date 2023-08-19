#include "UMovieSceneEntitySystem.hpp"
#include "UMovieSceneQuaternionInterpolationRotationSystem.hpp"
UMovieSceneQuaternionInterpolationRotationSystem* UMovieSceneQuaternionInterpolationRotationSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem");
    return (UMovieSceneQuaternionInterpolationRotationSystem*)res;
}
