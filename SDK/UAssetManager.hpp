#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UAssetManager : public UObject {
public:
    char pad_28[0x2b8];
    TArray<UObject*> ObjectReferenceList; // 0x2e0
    bool bIsGlobalAsyncScanEnvironment; // 0x2f0
    bool bShouldGuessTypeAndName; // 0x2f1
    bool bShouldUseSynchronousLoad; // 0x2f2
    bool bIsLoadingFromPakFiles; // 0x2f3
    bool bShouldAcquireMissingChunksOnLoad; // 0x2f4
    bool bOnlyCookProductionAssets; // 0x2f5
    bool bIsBulkScanning; // 0x2f6
    bool bIsPrimaryAssetDirectoryCurrent; // 0x2f7
    bool bIsManagementDatabaseCurrent; // 0x2f8
    bool bUpdateManagementDatabaseAfterScan; // 0x2f9
    bool bIncludeOnlyOnDiskAssets; // 0x2fa
    bool bHasCompletedInitialScan; // 0x2fb
    int32_t NumberOfSpawnedNotifications; // 0x2fc
    char pad_300[0x178];
    static UAssetManager* StaticClass();
}; // Size: 0x478
#pragma pack(pop)
