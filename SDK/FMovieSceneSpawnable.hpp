#pragma once
#include <cstdint>
#include "ESpawnOwnership.hpp"
#include "FGuid.hpp"
#include "FTransform.hpp"
class UObject;
#pragma pack(push, 1)
struct FMovieSceneSpawnable {
    FTransform SpawnTransform; // 0x0
    TArray<FName> Tags; // 0x30
    bool bContinuouslyRespawn; // 0x40
    bool bNetAddressableName; // 0x41
    bool bEvaluateTracksWhenNotSpawned; // 0x42
    char pad_43[0x1];
    FGuid Guid; // 0x44
    char pad_54[0x4];
    FString Name; // 0x58
    UObject* ObjectTemplate; // 0x68
    TArray<FGuid> ChildPossessables; // 0x70
    ESpawnOwnership Ownership; // 0x80
    char pad_81[0x3];
    FName LevelName; // 0x84
    char pad_8c[0x4];
}; // Size: 0x90
#pragma pack(pop)
