#include "UMovieSceneNameableTrack.hpp"
#include "UMovieSceneNiagaraTrack.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneNiagaraTrack* UMovieSceneNiagaraTrack::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.MovieSceneNiagaraTrack");
    return (UMovieSceneNiagaraTrack*)res;
}
