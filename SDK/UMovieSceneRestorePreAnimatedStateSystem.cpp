#include "UMovieSceneEntityInstantiatorSystem.hpp"
#include "UMovieSceneRestorePreAnimatedStateSystem.hpp"
UMovieSceneRestorePreAnimatedStateSystem* UMovieSceneRestorePreAnimatedStateSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieScene.MovieSceneRestorePreAnimatedStateSystem");
    return (UMovieSceneRestorePreAnimatedStateSystem*)res;
}
