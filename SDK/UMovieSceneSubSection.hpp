#pragma once
#include <cstdint>
#include "FDirectoryPath.hpp"
#include "FMovieSceneSectionParameters.hpp"
#include "UMovieSceneSection.hpp"
class UMovieSceneSequence;
#pragma pack(push, 1)
class UMovieSceneSubSection : public UMovieSceneSection {
public:
    FMovieSceneSectionParameters Parameters; // 0xe8
    float StartOffset; // 0x10c
    float TimeScale; // 0x110
    float PrerollTime0; // 0x114
    uint8_t NetworkMask; // 0x118
    char pad_119[0x7];
    UMovieSceneSequence* SubSequence; // 0x120
    char pad_128[0x20];
    FString TargetSequenceName; // 0x148
    FDirectoryPath TargetPathToRecordTo; // 0x158
    static UMovieSceneSubSection* StaticClass();
    void SetSequence(UMovieSceneSequence* Sequence);
    UMovieSceneSequence* GetSequence();
}; // Size: 0x168
#pragma pack(pop)
