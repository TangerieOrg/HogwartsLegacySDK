#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
#pragma pack(push, 1)
class UKismetStringTableLibrary : public UBlueprintFunctionLibrary {
public:
    static UKismetStringTableLibrary* StaticClass();
    static bool IsRegisteredTableId(FName TableId);
    static bool IsRegisteredTableEntry(FName TableId, FString Key);
    static FString GetTableNamespace(FName TableId);
    static FString GetTableEntrySourceString(FName TableId, FString Key);
    static FString GetTableEntryMetaData(FName TableId, FString Key, FName MetaDataId);
    static TArray<FName> GetRegisteredStringTables();
    static TArray<FName> GetMetaDataIdsFromStringTableEntry(FName TableId, FString Key);
    static TArray<FString> GetKeysFromStringTable(FName TableId);
}; // Size: 0x28
#pragma pack(pop)
