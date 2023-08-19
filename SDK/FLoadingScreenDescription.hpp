#pragma once
#include <cstdint>
#include "EMoviePlaybackType.hpp"
#include "EStretch\Type.hpp"
#include "FSlateFontInfo.hpp"
#include "FSoftObjectPath.hpp"
#pragma pack(push, 1)
struct FLoadingScreenDescription {
    float MinimumLoadingScreenDisplayTime; // 0x0
    bool bAutoCompleteWhenLoadingCompletes; // 0x4
    bool bMoviesAreSkippable; // 0x5
    bool bWaitForManualStop; // 0x6
    EMoviePlaybackType PlaybackType; // 0x7
    bool bShowUIOverlay; // 0x8
    char pad_9[0x1f];
    FSlateFontInfo LoadingFont; // 0x28
    TArray<FString> MoviePaths; // 0x80
    TArray<FSoftObjectPath> Images; // 0x90
    EStretch::Type ImageStretch; // 0xa0
    char pad_a1[0x7];
}; // Size: 0xa8
#pragma pack(pop)
