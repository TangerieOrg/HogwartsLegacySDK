#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UMoviePlayerSettings : public UObject {
public:
    bool bWaitForMoviesToComplete; // 0x28
    bool bMoviesAreSkippable; // 0x29
    char pad_2a[0x6];
    TArray<FString> StartupMovies; // 0x30
    static UMoviePlayerSettings* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
