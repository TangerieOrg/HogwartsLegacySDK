#pragma once
#include <cstdint>
#include "EMovieSceneBuiltInEasing.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UMovieSceneBuiltInEasingFunction : public UObject {
public:
    char pad_28[0x8];
    EMovieSceneBuiltInEasing Type; // 0x30
    char pad_31[0x7];
    static UMovieSceneBuiltInEasingFunction* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
