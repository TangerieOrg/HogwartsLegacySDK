#pragma once
#include <cstdint>
#include "UObject.hpp"
struct FTransform;
class AActor;
struct FDbSingleColumnInfo;
#pragma pack(push, 1)
class UDbAssetMapper : public UObject {
public:
    char pad_28[0x50];
    static UDbAssetMapper* StaticClass();
    static AActor* SpawnAssetFromDbIdForAutomation(UObject* WorldContextObject, FTransform& InTransform, FString InItemName, int32_t inParentUID, int32_t inOverrideUID, bool bSpawnOnlyShell);
    static void SpawnAssetFromDbIdAsync(UObject* WorldContextObject, FTransform& InTransform, FString InItemName, bool bSpawnOnlyShell);
    static AActor* SpawnAssetFromDbId(UObject* WorldContextObject, FTransform& InTransform, FString InItemName, bool bSpawnOnlyShell);
    static bool SetTableColumnInfo(FDbSingleColumnInfo& inDbColInfo, FDbSingleColumnInfo& outDbColInfo, FString inTableName, FString inColumnName, bool inEmpty, bool inAddNone);
    static bool IsValidRegistryID(FString inRegistryName);
    static FName GetSubtypeID(FName& RegistryId);
    static FName GetSkeletonTypeID(FName& RegistryId);
    static FString GetRegistryTypeID(FName& inTypeName);
    static FName GetRegistryTypeDef(FName& RegistryId);
    static void GetItemSpawnAssetFromDbId(FString InItemName);
    static FName GetEmoteVoiceID(FName& RegistryId);
    static UDbAssetMapper* GetDbAssetMapper();
    static TArray<FString> GetAllRegistryTypeIDs();
    static TArray<FString> GetAllRegistrySubtypeIDs(FString RegistryTypeID);
    static TArray<FString> GetAllRegistryIDsOfType(FString SubtypeID);
    static FName GetAdditionalVoiceID(FName& RegistryId);
}; // Size: 0x78
#pragma pack(pop)
