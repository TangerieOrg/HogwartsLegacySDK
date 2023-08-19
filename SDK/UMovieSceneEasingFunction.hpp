#pragma once
#include <cstdint>
#include "UInterface.hpp"
#pragma pack(push, 1)
class UMovieSceneEasingFunction : public UInterface {
public:
    static UMovieSceneEasingFunction* StaticClass();
    float OnEvaluate(float Interp);
}; // Size: 0x28
#pragma pack(pop)
