#pragma once
#include <cstdint>
#include "UObject.hpp"
struct FSQLiteQueryResult;
struct FSQLiteQueryResultMap;
#pragma pack(push, 1)
class UDbGateway : public UObject {
public:
    char pad_28[0x120];
    static UDbGateway* StaticClass();
    static bool DbWriteMiscSaveDataItem(FString InOwner, FString InName, FString InValue, bool InBackupNow);
    static bool DbRemoveMiscSaveDataItem(FString InOwner, FString InName, FString InCallerName);
    static bool DbRemoveAllMiscSaveDataItems(FString InOwner, FString InCallerName);
    static bool DbReloadDynDB();
    static bool DbReadMiscSaveDataItem(FString InOwner, FString InName, FString& OutValue);
    static bool DbReadMiscSaveDataForOwner(FString InOwner, FSQLiteQueryResult& OutQueryResults);
    static bool DbQuerySingleColumnStrings(FString InQuery, TArray<FString>& OutQueryResults);
    static bool DbQueryMap(FString InQuery, FSQLiteQueryResultMap& OutQueryResults, bool inIgnoreDUPs);
    static bool DbQuery(FString InQuery, FSQLiteQueryResult& OutQueryResults);
    static bool DbPutDynDBImage(TArray<uint8_t>& RawDbImage);
    static bool DbOperate(FString InTransaction, bool InBackupNow);
    static bool DbGetDynDBImage(TArray<uint8_t>& RawDbImage);
    static bool DbEditorQueryMap(FString InQuery, FSQLiteQueryResultMap& OutQueryResults, bool inIgnoreDUPs);
    static bool DbEditorQuery(FString InQuery, FSQLiteQueryResult& OutQueryResults);
    static bool DbEditorOperate(FString InTransaction, int32_t& outNumRowsChanged, FString inTableName);
}; // Size: 0x148
#pragma pack(pop)
