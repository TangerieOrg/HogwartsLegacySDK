#include "UMovieSceneComponentAttachmentInvalidatorSystem.hpp"
#include "UMovieSceneEntityInstantiatorSystem.hpp"
UMovieSceneComponentAttachmentInvalidatorSystem* UMovieSceneComponentAttachmentInvalidatorSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem");
    return (UMovieSceneComponentAttachmentInvalidatorSystem*)res;
}
