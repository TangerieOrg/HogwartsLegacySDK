#pragma once
#include <cstdint>
#include "ELevelVisibility.hpp"
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection {
public:
    char pad_e8[0x8];
    ELevelVisibility Visibility; // 0xf0
    char pad_f1[0x7];
    TArray<FName> LevelNames; // 0xf8
    static UMovieSceneLevelVisibilitySection* StaticClass();
    void SetVisibility(ELevelVisibility InVisibility);
    void SetLevelNames(TArray<FName>& InLevelNames);
    ELevelVisibility GetVisibility();
    TArray<FName> GetLevelNames();
}; // Size: 0x108
#pragma pack(pop)
