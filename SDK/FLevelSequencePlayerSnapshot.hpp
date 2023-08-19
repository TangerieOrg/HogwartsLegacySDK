#pragma once
#include <cstdint>
#include "FLevelSequenceSnapshotSettings.hpp"
#include "FMovieSceneSequenceID.hpp"
#include "FQualifiedFrameTime.hpp"
class ULevelSequence;
#pragma pack(push, 1)
struct FLevelSequencePlayerSnapshot {
    FString MasterName; // 0x0
    FQualifiedFrameTime MasterTime; // 0x10
    FQualifiedFrameTime SourceTime; // 0x20
    FString CurrentShotName; // 0x30
    FQualifiedFrameTime CurrentShotLocalTime; // 0x40
    FQualifiedFrameTime CurrentShotSourceTime; // 0x50
    FString SourceTimecode; // 0x60
    char pad_70[0x28];
    FLevelSequenceSnapshotSettings Settings; // 0x98
    char pad_a4[0x4];
    ULevelSequence* ActiveShot; // 0xa8
    FMovieSceneSequenceID ShotID; // 0xb0
    char pad_b4[0x4];
}; // Size: 0xb8
#pragma pack(pop)
