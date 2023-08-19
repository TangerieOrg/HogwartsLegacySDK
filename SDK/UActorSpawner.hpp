#pragma once
#include <cstdint>
#include "UBaseProvider.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class UActorSpawner : public UBaseProvider {
public:
    UTransformProvider* SpawnLocation; // 0x28
    FName AlignmentSocket; // 0x30
    TArray<FName> WarmUpTags; // 0x38
    static UActorSpawner* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
