#pragma once
#include <cstdint>
#include "UMovieSceneEntitySystem.hpp"
#pragma pack(push, 1)
class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem {
public:
    char pad_40[0x50];
    static UTemplateSequencePropertyScalingEvaluatorSystem* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
