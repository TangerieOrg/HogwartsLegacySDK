#pragma once
#include <cstdint>
#include "FFullyLoadedPackagesInfo.hpp"
#include "FLevelStreamingStatus.hpp"
#include "FNamedNetDriver.hpp"
#include "FURL.hpp"
class UPendingNetGame;
class ULevel;
class UGameInstance;
class UObjectReferencer;
class UGameViewportClient;
#pragma pack(push, 1)
struct FWorldContext {
    char pad_0[0xd0];
    FURL LastURL; // 0xd0
    FURL LastRemoteURL; // 0x138
    UPendingNetGame* PendingNetGame; // 0x1a0
    TArray<FFullyLoadedPackagesInfo> PackagesToFullyLoad; // 0x1a8
    char pad_1b8[0x10];
    TArray<ULevel*> LoadedLevelsForPendingMapChange; // 0x1c8
    char pad_1d8[0x18];
    TArray<UObjectReferencer*> ObjectReferencers; // 0x1f0
    TArray<FLevelStreamingStatus> PendingLevelStreamingStatusUpdates; // 0x200
    UGameViewportClient* GameViewport; // 0x210
    UGameInstance* OwningGameInstance; // 0x218
    TArray<FNamedNetDriver> ActiveNetDrivers; // 0x220
    char pad_230[0x58];
}; // Size: 0x288
#pragma pack(pop)
