#include "UMovieSceneNiagaraSystemTrack.hpp"
#include "UMovieSceneNiagaraTrack.hpp"
UMovieSceneNiagaraSystemTrack* UMovieSceneNiagaraSystemTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.MovieSceneNiagaraSystemTrack");
    return (UMovieSceneNiagaraSystemTrack*)res;
}
