#include "UMovieSceneNiagaraFloatParameterTrack.hpp"
#include "UMovieSceneNiagaraParameterTrack.hpp"
UMovieSceneNiagaraFloatParameterTrack* UMovieSceneNiagaraFloatParameterTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.MovieSceneNiagaraFloatParameterTrack");
    return (UMovieSceneNiagaraFloatParameterTrack*)res;
}
