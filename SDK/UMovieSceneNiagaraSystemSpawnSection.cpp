#include "ENiagaraAgeUpdateMode.hpp"
#include "ENiagaraSystemSpawnSectionEndBehavior.hpp"
#include "ENiagaraSystemSpawnSectionEvaluateBehavior.hpp"
#include "ENiagaraSystemSpawnSectionStartBehavior.hpp"
#include "UMovieSceneNiagaraSystemSpawnSection.hpp"
#include "UMovieSceneSection.hpp"
UMovieSceneNiagaraSystemSpawnSection* UMovieSceneNiagaraSystemSpawnSection::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.MovieSceneNiagaraSystemSpawnSection");
    return (UMovieSceneNiagaraSystemSpawnSection*)res;
}
