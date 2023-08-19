#pragma once
#include <cstdint>
#include "ENiagaraAgeUpdateMode.hpp"
#include "ENiagaraSystemSpawnSectionEndBehavior.hpp"
#include "ENiagaraSystemSpawnSectionEvaluateBehavior.hpp"
#include "ENiagaraSystemSpawnSectionStartBehavior.hpp"
#include "FFrameNumber.hpp"
#include "FMovieSceneTrackImplementation.hpp"
#pragma pack(push, 1)
struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation {
    FFrameNumber SpawnSectionStartFrame; // 0x10
    FFrameNumber SpawnSectionEndFrame; // 0x14
    ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior; // 0x18
    ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior; // 0x1c
    ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior; // 0x20
    ENiagaraAgeUpdateMode AgeUpdateMode; // 0x24
    char pad_25[0x3];
}; // Size: 0x28
#pragma pack(pop)
