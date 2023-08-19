#include "UMovieScene3DTransformPropertySystem.hpp"
#include "UMovieScenePropertySystem.hpp"
UMovieScene3DTransformPropertySystem* UMovieScene3DTransformPropertySystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieScene3DTransformPropertySystem");
    return (UMovieScene3DTransformPropertySystem*)res;
}
