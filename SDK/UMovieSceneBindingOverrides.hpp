#pragma once
#include <cstdint>
#include "FMovieSceneBindingOverrideData.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UMovieSceneBindingOverrides : public UObject {
public:
    TArray<FMovieSceneBindingOverrideData> BindingData; // 0x28
    char pad_38[0x58];
    static UMovieSceneBindingOverrides* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
