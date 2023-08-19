#include "UMovieSceneNiagaraColorParameterTrack.hpp"
#include "UMovieSceneNiagaraParameterTrack.hpp"
UMovieSceneNiagaraColorParameterTrack* UMovieSceneNiagaraColorParameterTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.MovieSceneNiagaraColorParameterTrack");
    return (UMovieSceneNiagaraColorParameterTrack*)res;
}
