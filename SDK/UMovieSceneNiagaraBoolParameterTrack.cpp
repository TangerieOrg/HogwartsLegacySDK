#include "UMovieSceneNiagaraBoolParameterTrack.hpp"
#include "UMovieSceneNiagaraParameterTrack.hpp"
UMovieSceneNiagaraBoolParameterTrack* UMovieSceneNiagaraBoolParameterTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.MovieSceneNiagaraBoolParameterTrack");
    return (UMovieSceneNiagaraBoolParameterTrack*)res;
}
