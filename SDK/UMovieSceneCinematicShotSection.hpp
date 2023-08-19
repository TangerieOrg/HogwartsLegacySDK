#pragma once
#include <cstdint>
#include "UMovieSceneSubSection.hpp"
#pragma pack(push, 1)
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection {
public:
    FString ShotDisplayName; // 0x168
    char pad_178[0x18];
    static UMovieSceneCinematicShotSection* StaticClass();
    void SetShotDisplayName(FString InShotDisplayName);
    FString GetShotDisplayName();
}; // Size: 0x190
#pragma pack(pop)
