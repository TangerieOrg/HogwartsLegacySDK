#include "UMovieSceneNiagaraParameterTrack.hpp"
#include "UMovieSceneNiagaraVectorParameterTrack.hpp"
UMovieSceneNiagaraVectorParameterTrack* UMovieSceneNiagaraVectorParameterTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.MovieSceneNiagaraVectorParameterTrack");
    return (UMovieSceneNiagaraVectorParameterTrack*)res;
}
