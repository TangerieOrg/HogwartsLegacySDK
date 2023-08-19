#include "AActor.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FTransform.hpp"
#include "UDbAssetMapper.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
AActor* UDbAssetMapper::SpawnAssetFromDbId(UObject* WorldContextObject, FTransform& InTransform, FString InItemName, bool bSpawnOnlyShell) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapper.SpawnAssetFromDbId"));
    struct Params_SpawnAssetFromDbId {
        UObject* WorldContextObject; // 0x0
        char pad_8[0x8];
        FTransform InTransform; // 0x10
        FString InItemName; // 0x40
        bool bSpawnOnlyShell; // 0x50
        char pad_51[0x7];
        AActor* ReturnValue; // 0x58
    }; // Size: 0x60
    Params_SpawnAssetFromDbId params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.InTransform = (FTransform)InTransform;
    params.InItemName = (FString)InItemName;
    params.bSpawnOnlyShell = (bool)bSpawnOnlyShell;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InTransform = params.InTransform;
    return (AActor*)params.ReturnValue;
}
UDbAssetMapper* UDbAssetMapper::StaticClass() {
    static auto res = find_uobject("Class /Script/DbAssetMapper.DbAssetMapper");
    return (UDbAssetMapper*)res;
}
FName UDbAssetMapper::GetSkeletonTypeID(FName& RegistryId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapper.GetSkeletonTypeID"));
    struct Params_GetSkeletonTypeID {
        FName RegistryId; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetSkeletonTypeID params{};
    params.RegistryId = (FName)RegistryId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RegistryId = params.RegistryId;
    return (FName)params.ReturnValue;
}
TArray<FString> UDbAssetMapper::GetAllRegistrySubtypeIDs(FString RegistryTypeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapper.GetAllRegistrySubtypeIDs"));
    struct Params_GetAllRegistrySubtypeIDs {
        FString RegistryTypeID; // 0x0
        TArray<FString> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetAllRegistrySubtypeIDs params{};
    params.RegistryTypeID = (FString)RegistryTypeID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
AActor* UDbAssetMapper::SpawnAssetFromDbIdForAutomation(UObject* WorldContextObject, FTransform& InTransform, FString InItemName, int32_t inParentUID, int32_t inOverrideUID, bool bSpawnOnlyShell) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapper.SpawnAssetFromDbIdForAutomation"));
    struct Params_SpawnAssetFromDbIdForAutomation {
        UObject* WorldContextObject; // 0x0
        char pad_8[0x8];
        FTransform InTransform; // 0x10
        FString InItemName; // 0x40
        int32_t inParentUID; // 0x50
        int32_t inOverrideUID; // 0x54
        bool bSpawnOnlyShell; // 0x58
        char pad_59[0x7];
        AActor* ReturnValue; // 0x60
    }; // Size: 0x68
    Params_SpawnAssetFromDbIdForAutomation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.InTransform = (FTransform)InTransform;
    params.InItemName = (FString)InItemName;
    params.inParentUID = (int32_t)inParentUID;
    params.inOverrideUID = (int32_t)inOverrideUID;
    params.bSpawnOnlyShell = (bool)bSpawnOnlyShell;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InTransform = params.InTransform;
    return (AActor*)params.ReturnValue;
}
void UDbAssetMapper::SpawnAssetFromDbIdAsync(UObject* WorldContextObject, FTransform& InTransform, FString InItemName, bool bSpawnOnlyShell) {}
bool UDbAssetMapper::SetTableColumnInfo(FDbSingleColumnInfo& inDbColInfo, FDbSingleColumnInfo& outDbColInfo, FString inTableName, FString inColumnName, bool inEmpty, bool inAddNone) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapper.SetTableColumnInfo"));
    struct Params_SetTableColumnInfo {
        FDbSingleColumnInfo inDbColInfo; // 0x0
        FDbSingleColumnInfo outDbColInfo; // 0x88
        FString inTableName; // 0x110
        FString inColumnName; // 0x120
        bool inEmpty; // 0x130
        bool inAddNone; // 0x131
        bool ReturnValue; // 0x132
    }; // Size: 0x133
    Params_SetTableColumnInfo params{};
    params.inDbColInfo = (FDbSingleColumnInfo)inDbColInfo;
    params.outDbColInfo = (FDbSingleColumnInfo)outDbColInfo;
    params.inTableName = (FString)inTableName;
    params.inColumnName = (FString)inColumnName;
    params.inEmpty = (bool)inEmpty;
    params.inAddNone = (bool)inAddNone;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    inDbColInfo = params.inDbColInfo;
    outDbColInfo = params.outDbColInfo;
    return (bool)params.ReturnValue;
}
FName UDbAssetMapper::GetEmoteVoiceID(FName& RegistryId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapper.GetEmoteVoiceID"));
    struct Params_GetEmoteVoiceID {
        FName RegistryId; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetEmoteVoiceID params{};
    params.RegistryId = (FName)RegistryId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RegistryId = params.RegistryId;
    return (FName)params.ReturnValue;
}
bool UDbAssetMapper::IsValidRegistryID(FString inRegistryName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapper.IsValidRegistryID"));
    struct Params_IsValidRegistryID {
        FString inRegistryName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsValidRegistryID params{};
    params.inRegistryName = (FString)inRegistryName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName UDbAssetMapper::GetSubtypeID(FName& RegistryId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapper.GetSubtypeID"));
    struct Params_GetSubtypeID {
        FName RegistryId; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetSubtypeID params{};
    params.RegistryId = (FName)RegistryId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RegistryId = params.RegistryId;
    return (FName)params.ReturnValue;
}
FString UDbAssetMapper::GetRegistryTypeID(FName& inTypeName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapper.GetRegistryTypeID"));
    struct Params_GetRegistryTypeID {
        FName inTypeName; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetRegistryTypeID params{};
    params.inTypeName = (FName)inTypeName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    inTypeName = params.inTypeName;
    return (FString)params.ReturnValue;
}
UDbAssetMapper* UDbAssetMapper::GetDbAssetMapper() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapper.GetDbAssetMapper"));
    struct Params_GetDbAssetMapper {
        UDbAssetMapper* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDbAssetMapper params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UDbAssetMapper*)params.ReturnValue;
}
FName UDbAssetMapper::GetRegistryTypeDef(FName& RegistryId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapper.GetRegistryTypeDef"));
    struct Params_GetRegistryTypeDef {
        FName RegistryId; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetRegistryTypeDef params{};
    params.RegistryId = (FName)RegistryId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RegistryId = params.RegistryId;
    return (FName)params.ReturnValue;
}
void UDbAssetMapper::GetItemSpawnAssetFromDbId(FString InItemName) {}
TArray<FString> UDbAssetMapper::GetAllRegistryTypeIDs() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapper.GetAllRegistryTypeIDs"));
    struct Params_GetAllRegistryTypeIDs {
        TArray<FString> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAllRegistryTypeIDs params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
TArray<FString> UDbAssetMapper::GetAllRegistryIDsOfType(FString SubtypeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapper.GetAllRegistryIDsOfType"));
    struct Params_GetAllRegistryIDsOfType {
        FString SubtypeID; // 0x0
        TArray<FString> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetAllRegistryIDsOfType params{};
    params.SubtypeID = (FString)SubtypeID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
FName UDbAssetMapper::GetAdditionalVoiceID(FName& RegistryId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapper.GetAdditionalVoiceID"));
    struct Params_GetAdditionalVoiceID {
        FName RegistryId; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetAdditionalVoiceID params{};
    params.RegistryId = (FName)RegistryId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RegistryId = params.RegistryId;
    return (FName)params.ReturnValue;
}
