#include "UMovieSceneNiagaraIntegerParameterTrack.hpp"
#include "UMovieSceneNiagaraParameterTrack.hpp"
UMovieSceneNiagaraIntegerParameterTrack* UMovieSceneNiagaraIntegerParameterTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.MovieSceneNiagaraIntegerParameterTrack");
    return (UMovieSceneNiagaraIntegerParameterTrack*)res;
}
