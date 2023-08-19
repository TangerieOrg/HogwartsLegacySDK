#pragma once
#include <cstdint>
#include "UMovieSceneEntitySystem.hpp"
#pragma pack(push, 1)
class UWeightAndEasingEvaluatorSystem : public UMovieSceneEntitySystem {
public:
    char pad_40[0x38];
    static UWeightAndEasingEvaluatorSystem* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
