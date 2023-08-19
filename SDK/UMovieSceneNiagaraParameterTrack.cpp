#include "FNiagaraVariable.hpp"
#include "UMovieSceneNiagaraParameterTrack.hpp"
#include "UMovieSceneNiagaraTrack.hpp"
UMovieSceneNiagaraParameterTrack* UMovieSceneNiagaraParameterTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.MovieSceneNiagaraParameterTrack");
    return (UMovieSceneNiagaraParameterTrack*)res;
}
