#pragma once
#include <cstdint>
#include "ENiagaraAgeUpdateMode.hpp"
#include "ENiagaraSystemSpawnSectionEndBehavior.hpp"
#include "ENiagaraSystemSpawnSectionEvaluateBehavior.hpp"
#include "ENiagaraSystemSpawnSectionStartBehavior.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection {
public:
    ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior; // 0xe8
    ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior; // 0xec
    ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior; // 0xf0
    ENiagaraAgeUpdateMode AgeUpdateMode; // 0xf4
    char pad_f5[0x3];
    static UMovieSceneNiagaraSystemSpawnSection* StaticClass();
}; // Size: 0xf8
#pragma pack(pop)
