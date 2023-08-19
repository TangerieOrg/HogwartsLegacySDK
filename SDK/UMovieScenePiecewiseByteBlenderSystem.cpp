#include "UMovieSceneBlenderSystem.hpp"
#include "UMovieScenePiecewiseByteBlenderSystem.hpp"
UMovieScenePiecewiseByteBlenderSystem* UMovieScenePiecewiseByteBlenderSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieScenePiecewiseByteBlenderSystem");
    return (UMovieScenePiecewiseByteBlenderSystem*)res;
}
