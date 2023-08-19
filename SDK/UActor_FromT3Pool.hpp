#pragma once
#include <cstdint>
#include "FDbDoubleColumnInfo.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "UActorProvider.hpp"
class UStringProvider;
class UTransformProvider;
#pragma pack(push, 1)
class UActor_FromT3Pool : public UActorProvider {
public:
    char pad_38[0x8];
    bool bUseBoundParameter; // 0x40
    char pad_41[0x7];
    UStringProvider* ActorDbIdProvider; // 0x48
    FDbDoubleColumnInfo CharacterIdInfo; // 0x50
    FDbSingleColumnInfo CharacterLookIdInfo; // 0x128
    UTransformProvider* PlacementLocation; // 0x1b0
    bool bStartWithoutActors; // 0x1b8
    char pad_1b9[0x57];
    static UActor_FromT3Pool* StaticClass();
}; // Size: 0x210
#pragma pack(pop)
