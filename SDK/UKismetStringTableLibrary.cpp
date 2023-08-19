#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UKismetStringTableLibrary.hpp"
UKismetStringTableLibrary* UKismetStringTableLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.KismetStringTableLibrary");
    return (UKismetStringTableLibrary*)res;
}
bool UKismetStringTableLibrary::IsRegisteredTableId(FName TableId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringTableLibrary.IsRegisteredTableId"));
    struct Params_IsRegisteredTableId {
        FName TableId; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsRegisteredTableId params{};
    params.TableId = (FName)TableId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UKismetStringTableLibrary::IsRegisteredTableEntry(FName TableId, FString Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringTableLibrary.IsRegisteredTableEntry"));
    struct Params_IsRegisteredTableEntry {
        FName TableId; // 0x0
        FString Key; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_IsRegisteredTableEntry params{};
    params.TableId = (FName)TableId;
    params.Key = (FString)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UKismetStringTableLibrary::GetTableNamespace(FName TableId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringTableLibrary.GetTableNamespace"));
    struct Params_GetTableNamespace {
        FName TableId; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetTableNamespace params{};
    params.TableId = (FName)TableId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UKismetStringTableLibrary::GetTableEntrySourceString(FName TableId, FString Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringTableLibrary.GetTableEntrySourceString"));
    struct Params_GetTableEntrySourceString {
        FName TableId; // 0x0
        FString Key; // 0x8
        FString ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetTableEntrySourceString params{};
    params.TableId = (FName)TableId;
    params.Key = (FString)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
TArray<FName> UKismetStringTableLibrary::GetRegisteredStringTables() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringTableLibrary.GetRegisteredStringTables"));
    struct Params_GetRegisteredStringTables {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetRegisteredStringTables params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
FString UKismetStringTableLibrary::GetTableEntryMetaData(FName TableId, FString Key, FName MetaDataId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringTableLibrary.GetTableEntryMetaData"));
    struct Params_GetTableEntryMetaData {
        FName TableId; // 0x0
        FString Key; // 0x8
        FName MetaDataId; // 0x18
        FString ReturnValue; // 0x20
    }; // Size: 0x30
    Params_GetTableEntryMetaData params{};
    params.TableId = (FName)TableId;
    params.Key = (FString)Key;
    params.MetaDataId = (FName)MetaDataId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
TArray<FName> UKismetStringTableLibrary::GetMetaDataIdsFromStringTableEntry(FName TableId, FString Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringTableLibrary.GetMetaDataIdsFromStringTableEntry"));
    struct Params_GetMetaDataIdsFromStringTableEntry {
        FName TableId; // 0x0
        FString Key; // 0x8
        TArray<FName> ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetMetaDataIdsFromStringTableEntry params{};
    params.TableId = (FName)TableId;
    params.Key = (FString)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
TArray<FString> UKismetStringTableLibrary::GetKeysFromStringTable(FName TableId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.KismetStringTableLibrary.GetKeysFromStringTable"));
    struct Params_GetKeysFromStringTable {
        FName TableId; // 0x0
        TArray<FString> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetKeysFromStringTable params{};
    params.TableId = (FName)TableId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
