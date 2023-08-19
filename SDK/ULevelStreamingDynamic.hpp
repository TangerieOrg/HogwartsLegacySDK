#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "ULevelStreaming.hpp"
class UObject;
#pragma pack(push, 1)
class ULevelStreamingDynamic : public ULevelStreaming {
public:
    static ULevelStreamingDynamic* StaticClass();
    static void LoadLevelInstanceBySoftObjectPtr(UObject* WorldContextObject);
    static ULevelStreamingDynamic* LoadLevelInstance(UObject* WorldContextObject, FString LevelName, FVector Location, FRotator Rotation, bool& bOutSuccess, FString OptionalLevelNameOverride);
}; // Size: 0x1b0
#pragma pack(pop)
