#include "AActor.hpp"
#include "ESpawnActorCollisionHandlingMethod.hpp"
#include "ESpawnAllowedResponse.hpp"
#include "ESpawnRestrictionResponse.hpp"
#include "FNPC_DbObjectInstanceData.hpp"
#include "FRestrictionInfo.hpp"
#include "FSQLiteQueryResultMap.hpp"
#include "FSoftObjectPath.hpp"
#include "FTransform.hpp"
#include "UClass.hpp"
#include "UDbAssetMapperSpawn_Interface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "ULevel.hpp"
#include "UObject.hpp"
#include "UWorld.hpp"
AActor* UDbAssetMapperSpawn_Interface::SpawnShell(UWorld* InWorld, FTransform& InTransform, FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent, ESpawnActorCollisionHandlingMethod InCollisionMethod, ULevel* InOverrideLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.SpawnShell"));
    struct Params_SpawnShell {
        UWorld* InWorld; // 0x0
        char pad_8[0x8];
        FTransform InTransform; // 0x10
        FString InRegistryID; // 0x40
        uint32_t inParentUID; // 0x50
        uint32_t inOverrideUID; // 0x54
        bool inIsPersistent; // 0x58
        ESpawnActorCollisionHandlingMethod InCollisionMethod; // 0x59
        char pad_5a[0x6];
        ULevel* InOverrideLevel; // 0x60
        AActor* ReturnValue; // 0x68
    }; // Size: 0x70
    Params_SpawnShell params{};
    params.InWorld = (UWorld*)InWorld;
    params.InTransform = (FTransform)InTransform;
    params.InRegistryID = (FString)InRegistryID;
    params.inParentUID = (uint32_t)inParentUID;
    params.inOverrideUID = (uint32_t)inOverrideUID;
    params.inIsPersistent = (bool)inIsPersistent;
    params.InCollisionMethod = (ESpawnActorCollisionHandlingMethod)InCollisionMethod;
    params.InOverrideLevel = (ULevel*)InOverrideLevel;
    ProcessEvent(func, &params);
    InTransform = params.InTransform;
    return (AActor*)params.ReturnValue;
}
UDbAssetMapperSpawn_Interface* UDbAssetMapperSpawn_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/DbAssetMapper.DbAssetMapperSpawn_Interface");
    return (UDbAssetMapperSpawn_Interface*)res;
}
bool UDbAssetMapperSpawn_Interface::UnregisterSpawnWhenDestroyed(AActor* InAssetPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.UnregisterSpawnWhenDestroyed"));
    struct Params_UnregisterSpawnWhenDestroyed {
        AActor* InAssetPtr; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_UnregisterSpawnWhenDestroyed params{};
    params.InAssetPtr = (AActor*)InAssetPtr;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
AActor* UDbAssetMapperSpawn_Interface::Spawn(UWorld* InWorld, FTransform& InTransform, FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent, ESpawnActorCollisionHandlingMethod InCollisionMethod, ULevel* InOverrideLevel, UObject* InParentContainer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.Spawn"));
    struct Params_Spawn {
        UWorld* InWorld; // 0x0
        char pad_8[0x8];
        FTransform InTransform; // 0x10
        FString InRegistryID; // 0x40
        uint32_t inParentUID; // 0x50
        uint32_t inOverrideUID; // 0x54
        bool inIsPersistent; // 0x58
        ESpawnActorCollisionHandlingMethod InCollisionMethod; // 0x59
        char pad_5a[0x6];
        ULevel* InOverrideLevel; // 0x60
        UObject* InParentContainer; // 0x68
        AActor* ReturnValue; // 0x70
    }; // Size: 0x78
    Params_Spawn params{};
    params.InWorld = (UWorld*)InWorld;
    params.InTransform = (FTransform)InTransform;
    params.InRegistryID = (FString)InRegistryID;
    params.inParentUID = (uint32_t)inParentUID;
    params.inOverrideUID = (uint32_t)inOverrideUID;
    params.inIsPersistent = (bool)inIsPersistent;
    params.InCollisionMethod = (ESpawnActorCollisionHandlingMethod)InCollisionMethod;
    params.InOverrideLevel = (ULevel*)InOverrideLevel;
    params.InParentContainer = (UObject*)InParentContainer;
    ProcessEvent(func, &params);
    InTransform = params.InTransform;
    return (AActor*)params.ReturnValue;
}
bool UDbAssetMapperSpawn_Interface::GetSpawnPath(FString InItemID, FSoftObjectPath& OutPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.GetSpawnPath"));
    struct Params_GetSpawnPath {
        FString InItemID; // 0x0
        FSoftObjectPath OutPath; // 0x10
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_GetSpawnPath params{};
    params.InItemID = (FString)InItemID;
    params.OutPath = (FSoftObjectPath)OutPath;
    ProcessEvent(func, &params);
    OutPath = params.OutPath;
    return (bool)params.ReturnValue;
}
void UDbAssetMapperSpawn_Interface::RestoreData(FString InItemID, AActor* TargetActor, uint32_t inParentUID, uint32_t inOverrideUID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.RestoreData"));
    struct Params_RestoreData {
        FString InItemID; // 0x0
        AActor* TargetActor; // 0x10
        uint32_t inParentUID; // 0x18
        uint32_t inOverrideUID; // 0x1c
    }; // Size: 0x20
    Params_RestoreData params{};
    params.InItemID = (FString)InItemID;
    params.TargetActor = (AActor*)TargetActor;
    params.inParentUID = (uint32_t)inParentUID;
    params.inOverrideUID = (uint32_t)inOverrideUID;
    ProcessEvent(func, &params);
}
bool UDbAssetMapperSpawn_Interface::RegisterNewSpawn(AActor* InAssetPtr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.RegisterNewSpawn"));
    struct Params_RegisterNewSpawn {
        AActor* InAssetPtr; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_RegisterNewSpawn params{};
    params.InAssetPtr = (AActor*)InAssetPtr;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
AActor* UDbAssetMapperSpawn_Interface::SpawnSEAsset(UWorld* InWorld, FTransform& InTransform, FString InRegistryID, FString inOverrideScheduleName, FString inOverrideScheduleTable, FString inOverrideWorldID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent, ESpawnActorCollisionHandlingMethod InCollisionMethod, ULevel* InOverrideLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.SpawnSEAsset"));
    struct Params_SpawnSEAsset {
        UWorld* InWorld; // 0x0
        char pad_8[0x8];
        FTransform InTransform; // 0x10
        FString InRegistryID; // 0x40
        FString inOverrideScheduleName; // 0x50
        FString inOverrideScheduleTable; // 0x60
        FString inOverrideWorldID; // 0x70
        uint32_t inParentUID; // 0x80
        uint32_t inOverrideUID; // 0x84
        bool inIsPersistent; // 0x88
        ESpawnActorCollisionHandlingMethod InCollisionMethod; // 0x89
        char pad_8a[0x6];
        ULevel* InOverrideLevel; // 0x90
        AActor* ReturnValue; // 0x98
    }; // Size: 0xa0
    Params_SpawnSEAsset params{};
    params.InWorld = (UWorld*)InWorld;
    params.InTransform = (FTransform)InTransform;
    params.InRegistryID = (FString)InRegistryID;
    params.inOverrideScheduleName = (FString)inOverrideScheduleName;
    params.inOverrideScheduleTable = (FString)inOverrideScheduleTable;
    params.inOverrideWorldID = (FString)inOverrideWorldID;
    params.inParentUID = (uint32_t)inParentUID;
    params.inOverrideUID = (uint32_t)inOverrideUID;
    params.inIsPersistent = (bool)inIsPersistent;
    params.InCollisionMethod = (ESpawnActorCollisionHandlingMethod)InCollisionMethod;
    params.InOverrideLevel = (ULevel*)InOverrideLevel;
    ProcessEvent(func, &params);
    InTransform = params.InTransform;
    return (AActor*)params.ReturnValue;
}
uint32_t UDbAssetMapperSpawn_Interface::GetUniqueObjectID(FString InItemID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.GetUniqueObjectID"));
    struct Params_GetUniqueObjectID {
        FString InItemID; // 0x0
        uint32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetUniqueObjectID params{};
    params.InItemID = (FString)InItemID;
    ProcessEvent(func, &params);
    return (uint32_t)params.ReturnValue;
}
AActor* UDbAssetMapperSpawn_Interface::SpawnAsync(UWorld* InWorld, FTransform& InTransform, FString InRegistryID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent, ESpawnActorCollisionHandlingMethod InCollisionMethod, ULevel* InOverrideLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.SpawnAsync"));
    struct Params_SpawnAsync {
        UWorld* InWorld; // 0x0
        char pad_8[0x8];
        FTransform InTransform; // 0x10
        FString InRegistryID; // 0x40
        uint32_t inParentUID; // 0x50
        uint32_t inOverrideUID; // 0x54
        bool inIsPersistent; // 0x58
        ESpawnActorCollisionHandlingMethod InCollisionMethod; // 0x59
        char pad_5a[0x6];
        ULevel* InOverrideLevel; // 0x60
        AActor* ReturnValue; // 0x68
    }; // Size: 0x70
    Params_SpawnAsync params{};
    params.InWorld = (UWorld*)InWorld;
    params.InTransform = (FTransform)InTransform;
    params.InRegistryID = (FString)InRegistryID;
    params.inParentUID = (uint32_t)inParentUID;
    params.inOverrideUID = (uint32_t)inOverrideUID;
    params.inIsPersistent = (bool)inIsPersistent;
    params.InCollisionMethod = (ESpawnActorCollisionHandlingMethod)InCollisionMethod;
    params.InOverrideLevel = (ULevel*)InOverrideLevel;
    ProcessEvent(func, &params);
    InTransform = params.InTransform;
    return (AActor*)params.ReturnValue;
}
void UDbAssetMapperSpawn_Interface::SaveData(FString InItemID, AActor* TargetActor, uint32_t inParentUID, uint32_t inOverrideUID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.SaveData"));
    struct Params_SaveData {
        FString InItemID; // 0x0
        AActor* TargetActor; // 0x10
        uint32_t inParentUID; // 0x18
        uint32_t inOverrideUID; // 0x1c
    }; // Size: 0x20
    Params_SaveData params{};
    params.InItemID = (FString)InItemID;
    params.TargetActor = (AActor*)TargetActor;
    params.inParentUID = (uint32_t)inParentUID;
    params.inOverrideUID = (uint32_t)inOverrideUID;
    ProcessEvent(func, &params);
}
FString UDbAssetMapperSpawn_Interface::RedirectObjectToInstance(FString InRegistryID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.RedirectObjectToInstance"));
    struct Params_RedirectObjectToInstance {
        FString InRegistryID; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_RedirectObjectToInstance params{};
    params.InRegistryID = (FString)InRegistryID;
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
int32_t UDbAssetMapperSpawn_Interface::GetPlayerExperienceLevel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.GetPlayerExperienceLevel"));
    struct Params_GetPlayerExperienceLevel {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPlayerExperienceLevel params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FName UDbAssetMapperSpawn_Interface::RedirectObjectClass(FName InRegistryID, FString inTableName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.RedirectObjectClass"));
    struct Params_RedirectObjectClass {
        FName InRegistryID; // 0x0
        FString inTableName; // 0x8
        FName ReturnValue; // 0x18
    }; // Size: 0x20
    Params_RedirectObjectClass params{};
    params.InRegistryID = (FName)InRegistryID;
    params.inTableName = (FString)inTableName;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool UDbAssetMapperSpawn_Interface::RedirectNamedObject(FName InRegistryID, FString inTableName, FString& outClassID, FString& outLootID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.RedirectNamedObject"));
    struct Params_RedirectNamedObject {
        FName InRegistryID; // 0x0
        FString inTableName; // 0x8
        FString outClassID; // 0x18
        FString outLootID; // 0x28
        bool ReturnValue; // 0x38
    }; // Size: 0x39
    Params_RedirectNamedObject params{};
    params.InRegistryID = (FName)InRegistryID;
    params.inTableName = (FString)inTableName;
    params.outClassID = (FString)outClassID;
    params.outLootID = (FString)outLootID;
    ProcessEvent(func, &params);
    outClassID = params.outClassID;
    outLootID = params.outLootID;
    return (bool)params.ReturnValue;
}
bool UDbAssetMapperSpawn_Interface::GetActorDefinitionData(FString InRegistryID, FName& outGenderID, FName& OutVoiceID, FName& outEmoteID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.GetActorDefinitionData"));
    struct Params_GetActorDefinitionData {
        FString InRegistryID; // 0x0
        FName outGenderID; // 0x10
        FName OutVoiceID; // 0x18
        FName outEmoteID; // 0x20
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_GetActorDefinitionData params{};
    params.InRegistryID = (FString)InRegistryID;
    params.outGenderID = (FName)outGenderID;
    params.OutVoiceID = (FName)OutVoiceID;
    params.outEmoteID = (FName)outEmoteID;
    ProcessEvent(func, &params);
    outGenderID = params.outGenderID;
    OutVoiceID = params.OutVoiceID;
    outEmoteID = params.outEmoteID;
    return (bool)params.ReturnValue;
}
FName UDbAssetMapperSpawn_Interface::RedirectInstanceToObject(FName InRegistryID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.RedirectInstanceToObject"));
    struct Params_RedirectInstanceToObject {
        FName InRegistryID; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_RedirectInstanceToObject params{};
    params.InRegistryID = (FName)InRegistryID;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool UDbAssetMapperSpawn_Interface::IsObjectInDefinitionTable(FName InRegistryID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.IsObjectInDefinitionTable"));
    struct Params_IsObjectInDefinitionTable {
        FName InRegistryID; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsObjectInDefinitionTable params{};
    params.InRegistryID = (FName)InRegistryID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName UDbAssetMapperSpawn_Interface::GetTableName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.GetTableName"));
    struct Params_GetTableName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTableName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool UDbAssetMapperSpawn_Interface::CreateItemAsScheduledEntity(FString InItemID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.CreateItemAsScheduledEntity"));
    struct Params_CreateItemAsScheduledEntity {
        FString InItemID; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_CreateItemAsScheduledEntity params{};
    params.InItemID = (FString)InItemID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FName UDbAssetMapperSpawn_Interface::GetDynamicTableName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.GetDynamicTableName"));
    struct Params_GetDynamicTableName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDynamicTableName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool UDbAssetMapperSpawn_Interface::GetSpawnRestrictionsByCategory(FString InItemID, FString inCategory, FSQLiteQueryResultMap& OutQueryResultMap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.GetSpawnRestrictionsByCategory"));
    struct Params_GetSpawnRestrictionsByCategory {
        FString InItemID; // 0x0
        FString inCategory; // 0x10
        FSQLiteQueryResultMap OutQueryResultMap; // 0x20
        bool ReturnValue; // 0x48
    }; // Size: 0x49
    Params_GetSpawnRestrictionsByCategory params{};
    params.InItemID = (FString)InItemID;
    params.inCategory = (FString)inCategory;
    params.OutQueryResultMap = (FSQLiteQueryResultMap)OutQueryResultMap;
    ProcessEvent(func, &params);
    OutQueryResultMap = params.OutQueryResultMap;
    return (bool)params.ReturnValue;
}
bool UDbAssetMapperSpawn_Interface::GetSpawnRestrictions(FString InItemID, FSQLiteQueryResultMap& OutQueryResultMap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.GetSpawnRestrictions"));
    struct Params_GetSpawnRestrictions {
        FString InItemID; // 0x0
        FSQLiteQueryResultMap OutQueryResultMap; // 0x10
        bool ReturnValue; // 0x38
    }; // Size: 0x39
    Params_GetSpawnRestrictions params{};
    params.InItemID = (FString)InItemID;
    params.OutQueryResultMap = (FSQLiteQueryResultMap)OutQueryResultMap;
    ProcessEvent(func, &params);
    OutQueryResultMap = params.OutQueryResultMap;
    return (bool)params.ReturnValue;
}
bool UDbAssetMapperSpawn_Interface::GetSpawnAsset(FString InItemID, UClass*& OutAsset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.GetSpawnAsset"));
    struct Params_GetSpawnAsset {
        FString InItemID; // 0x0
        UClass* OutAsset; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_GetSpawnAsset params{};
    params.InItemID = (FString)InItemID;
    params.OutAsset = (UClass*)OutAsset;
    ProcessEvent(func, &params);
    OutAsset = params.OutAsset;
    return (bool)params.ReturnValue;
}
bool UDbAssetMapperSpawn_Interface::GetShellSpawnPath(FString InItemID, FSoftObjectPath& OutPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.GetShellSpawnPath"));
    struct Params_GetShellSpawnPath {
        FString InItemID; // 0x0
        FSoftObjectPath OutPath; // 0x10
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_GetShellSpawnPath params{};
    params.InItemID = (FString)InItemID;
    params.OutPath = (FSoftObjectPath)OutPath;
    ProcessEvent(func, &params);
    OutPath = params.OutPath;
    return (bool)params.ReturnValue;
}
bool UDbAssetMapperSpawn_Interface::GetObjectInstanceData(FName InRegistryID, TArray<FNPC_DbObjectInstanceData>& outInstanceData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.GetObjectInstanceData"));
    struct Params_GetObjectInstanceData {
        FName InRegistryID; // 0x0
        TArray<FNPC_DbObjectInstanceData> outInstanceData; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_GetObjectInstanceData params{};
    params.InRegistryID = (FName)InRegistryID;
    params.outInstanceData = (TArray<FNPC_DbObjectInstanceData>)outInstanceData;
    ProcessEvent(func, &params);
    outInstanceData = params.outInstanceData;
    return (bool)params.ReturnValue;
}
float UDbAssetMapperSpawn_Interface::GetHealth(FString InItemID, uint32_t inParentUID, uint32_t inOverrideUID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.GetHealth"));
    struct Params_GetHealth {
        FString InItemID; // 0x0
        uint32_t inParentUID; // 0x10
        uint32_t inOverrideUID; // 0x14
        float ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_GetHealth params{};
    params.InItemID = (FString)InItemID;
    params.inParentUID = (uint32_t)inParentUID;
    params.inOverrideUID = (uint32_t)inOverrideUID;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FName UDbAssetMapperSpawn_Interface::GetDynamicPersistenceTableName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.GetDynamicPersistenceTableName"));
    struct Params_GetDynamicPersistenceTableName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDynamicPersistenceTableName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
bool UDbAssetMapperSpawn_Interface::GetDefinitionIdentifyingColumnName(FName& OutFirstColumnName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.GetDefinitionIdentifyingColumnName"));
    struct Params_GetDefinitionIdentifyingColumnName {
        FName OutFirstColumnName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetDefinitionIdentifyingColumnName params{};
    params.OutFirstColumnName = (FName)OutFirstColumnName;
    ProcessEvent(func, &params);
    OutFirstColumnName = params.OutFirstColumnName;
    return (bool)params.ReturnValue;
}
FName UDbAssetMapperSpawn_Interface::GetCharacterDerivedClass(FName InRegistryID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.GetCharacterDerivedClass"));
    struct Params_GetCharacterDerivedClass {
        FName InRegistryID; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetCharacterDerivedClass params{};
    params.InRegistryID = (FName)InRegistryID;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
ESpawnRestrictionResponse UDbAssetMapperSpawn_Interface::CheckSpawnRestrictions(FRestrictionInfo& ioRestrictionInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.CheckSpawnRestrictions"));
    struct Params_CheckSpawnRestrictions {
        FRestrictionInfo ioRestrictionInfo; // 0x0
        ESpawnRestrictionResponse ReturnValue; // 0xb8
    }; // Size: 0xb9
    Params_CheckSpawnRestrictions params{};
    params.ioRestrictionInfo = (FRestrictionInfo)ioRestrictionInfo;
    ProcessEvent(func, &params);
    ioRestrictionInfo = params.ioRestrictionInfo;
    return (ESpawnRestrictionResponse)params.ReturnValue;
}
ESpawnAllowedResponse UDbAssetMapperSpawn_Interface::AllowSpawn(FString InItemID, uint32_t inParentUID, uint32_t inOverrideUID, bool inIsPersistent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbAssetMapper.DbAssetMapperSpawn_Interface.AllowSpawn"));
    struct Params_AllowSpawn {
        FString InItemID; // 0x0
        uint32_t inParentUID; // 0x10
        uint32_t inOverrideUID; // 0x14
        bool inIsPersistent; // 0x18
        ESpawnAllowedResponse ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_AllowSpawn params{};
    params.InItemID = (FString)InItemID;
    params.inParentUID = (uint32_t)inParentUID;
    params.inOverrideUID = (uint32_t)inOverrideUID;
    params.inIsPersistent = (bool)inIsPersistent;
    ProcessEvent(func, &params);
    return (ESpawnAllowedResponse)params.ReturnValue;
}
