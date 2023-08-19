#include "UMovieSceneComponentAttachmentSystem.hpp"
#include "UMovieSceneEntityInstantiatorSystem.hpp"
UMovieSceneComponentAttachmentSystem* UMovieSceneComponentAttachmentSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneComponentAttachmentSystem");
    return (UMovieSceneComponentAttachmentSystem*)res;
}
