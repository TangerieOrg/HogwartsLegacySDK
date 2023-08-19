#include "FSQLiteQueryResult.hpp"
#include "FSQLiteQueryResultMap.hpp"
#include "UDbGateway.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
bool UDbGateway::DbRemoveMiscSaveDataItem(FString InOwner, FString InName, FString InCallerName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbGateway.DbGateway.DbRemoveMiscSaveDataItem"));
    struct Params_DbRemoveMiscSaveDataItem {
        FString InOwner; // 0x0
        FString InName; // 0x10
        FString InCallerName; // 0x20
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_DbRemoveMiscSaveDataItem params{};
    params.InOwner = (FString)InOwner;
    params.InName = (FString)InName;
    params.InCallerName = (FString)InCallerName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UDbGateway* UDbGateway::StaticClass() {
    static auto res = find_uobject("Class /Script/DbGateway.DbGateway");
    return (UDbGateway*)res;
}
bool UDbGateway::DbWriteMiscSaveDataItem(FString InOwner, FString InName, FString InValue, bool InBackupNow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbGateway.DbGateway.DbWriteMiscSaveDataItem"));
    struct Params_DbWriteMiscSaveDataItem {
        FString InOwner; // 0x0
        FString InName; // 0x10
        FString InValue; // 0x20
        bool InBackupNow; // 0x30
        bool ReturnValue; // 0x31
    }; // Size: 0x32
    Params_DbWriteMiscSaveDataItem params{};
    params.InOwner = (FString)InOwner;
    params.InName = (FString)InName;
    params.InValue = (FString)InValue;
    params.InBackupNow = (bool)InBackupNow;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDbGateway::DbReadMiscSaveDataItem(FString InOwner, FString InName, FString& OutValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbGateway.DbGateway.DbReadMiscSaveDataItem"));
    struct Params_DbReadMiscSaveDataItem {
        FString InOwner; // 0x0
        FString InName; // 0x10
        FString OutValue; // 0x20
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_DbReadMiscSaveDataItem params{};
    params.InOwner = (FString)InOwner;
    params.InName = (FString)InName;
    params.OutValue = (FString)OutValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutValue = params.OutValue;
    return (bool)params.ReturnValue;
}
bool UDbGateway::DbReadMiscSaveDataForOwner(FString InOwner, FSQLiteQueryResult& OutQueryResults) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbGateway.DbGateway.DbReadMiscSaveDataForOwner"));
    struct Params_DbReadMiscSaveDataForOwner {
        FString InOwner; // 0x0
        FSQLiteQueryResult OutQueryResults; // 0x10
        bool ReturnValue; // 0x38
    }; // Size: 0x39
    Params_DbReadMiscSaveDataForOwner params{};
    params.InOwner = (FString)InOwner;
    params.OutQueryResults = (FSQLiteQueryResult)OutQueryResults;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutQueryResults = params.OutQueryResults;
    return (bool)params.ReturnValue;
}
bool UDbGateway::DbReloadDynDB() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbGateway.DbGateway.DbReloadDynDB"));
    struct Params_DbReloadDynDB {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DbReloadDynDB params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDbGateway::DbRemoveAllMiscSaveDataItems(FString InOwner, FString InCallerName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbGateway.DbGateway.DbRemoveAllMiscSaveDataItems"));
    struct Params_DbRemoveAllMiscSaveDataItems {
        FString InOwner; // 0x0
        FString InCallerName; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_DbRemoveAllMiscSaveDataItems params{};
    params.InOwner = (FString)InOwner;
    params.InCallerName = (FString)InCallerName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDbGateway::DbQuerySingleColumnStrings(FString InQuery, TArray<FString>& OutQueryResults) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbGateway.DbGateway.DbQuerySingleColumnStrings"));
    struct Params_DbQuerySingleColumnStrings {
        FString InQuery; // 0x0
        TArray<FString> OutQueryResults; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_DbQuerySingleColumnStrings params{};
    params.InQuery = (FString)InQuery;
    params.OutQueryResults = (TArray<FString>)OutQueryResults;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutQueryResults = params.OutQueryResults;
    return (bool)params.ReturnValue;
}
bool UDbGateway::DbQueryMap(FString InQuery, FSQLiteQueryResultMap& OutQueryResults, bool inIgnoreDUPs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbGateway.DbGateway.DbQueryMap"));
    struct Params_DbQueryMap {
        FString InQuery; // 0x0
        FSQLiteQueryResultMap OutQueryResults; // 0x10
        bool inIgnoreDUPs; // 0x38
        bool ReturnValue; // 0x39
    }; // Size: 0x3a
    Params_DbQueryMap params{};
    params.InQuery = (FString)InQuery;
    params.OutQueryResults = (FSQLiteQueryResultMap)OutQueryResults;
    params.inIgnoreDUPs = (bool)inIgnoreDUPs;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutQueryResults = params.OutQueryResults;
    return (bool)params.ReturnValue;
}
bool UDbGateway::DbQuery(FString InQuery, FSQLiteQueryResult& OutQueryResults) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbGateway.DbGateway.DbQuery"));
    struct Params_DbQuery {
        FString InQuery; // 0x0
        FSQLiteQueryResult OutQueryResults; // 0x10
        bool ReturnValue; // 0x38
    }; // Size: 0x39
    Params_DbQuery params{};
    params.InQuery = (FString)InQuery;
    params.OutQueryResults = (FSQLiteQueryResult)OutQueryResults;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutQueryResults = params.OutQueryResults;
    return (bool)params.ReturnValue;
}
bool UDbGateway::DbPutDynDBImage(TArray<uint8_t>& RawDbImage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbGateway.DbGateway.DbPutDynDBImage"));
    struct Params_DbPutDynDBImage {
        TArray<uint8_t> RawDbImage; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_DbPutDynDBImage params{};
    params.RawDbImage = (TArray<uint8_t>)RawDbImage;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RawDbImage = params.RawDbImage;
    return (bool)params.ReturnValue;
}
bool UDbGateway::DbOperate(FString InTransaction, bool InBackupNow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbGateway.DbGateway.DbOperate"));
    struct Params_DbOperate {
        FString InTransaction; // 0x0
        bool InBackupNow; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_DbOperate params{};
    params.InTransaction = (FString)InTransaction;
    params.InBackupNow = (bool)InBackupNow;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDbGateway::DbGetDynDBImage(TArray<uint8_t>& RawDbImage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbGateway.DbGateway.DbGetDynDBImage"));
    struct Params_DbGetDynDBImage {
        TArray<uint8_t> RawDbImage; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_DbGetDynDBImage params{};
    params.RawDbImage = (TArray<uint8_t>)RawDbImage;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RawDbImage = params.RawDbImage;
    return (bool)params.ReturnValue;
}
bool UDbGateway::DbEditorQueryMap(FString InQuery, FSQLiteQueryResultMap& OutQueryResults, bool inIgnoreDUPs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbGateway.DbGateway.DbEditorQueryMap"));
    struct Params_DbEditorQueryMap {
        FString InQuery; // 0x0
        FSQLiteQueryResultMap OutQueryResults; // 0x10
        bool inIgnoreDUPs; // 0x38
        bool ReturnValue; // 0x39
    }; // Size: 0x3a
    Params_DbEditorQueryMap params{};
    params.InQuery = (FString)InQuery;
    params.OutQueryResults = (FSQLiteQueryResultMap)OutQueryResults;
    params.inIgnoreDUPs = (bool)inIgnoreDUPs;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutQueryResults = params.OutQueryResults;
    return (bool)params.ReturnValue;
}
bool UDbGateway::DbEditorQuery(FString InQuery, FSQLiteQueryResult& OutQueryResults) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbGateway.DbGateway.DbEditorQuery"));
    struct Params_DbEditorQuery {
        FString InQuery; // 0x0
        FSQLiteQueryResult OutQueryResults; // 0x10
        bool ReturnValue; // 0x38
    }; // Size: 0x39
    Params_DbEditorQuery params{};
    params.InQuery = (FString)InQuery;
    params.OutQueryResults = (FSQLiteQueryResult)OutQueryResults;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutQueryResults = params.OutQueryResults;
    return (bool)params.ReturnValue;
}
bool UDbGateway::DbEditorOperate(FString InTransaction, int32_t& outNumRowsChanged, FString inTableName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/DbGateway.DbGateway.DbEditorOperate"));
    struct Params_DbEditorOperate {
        FString InTransaction; // 0x0
        int32_t outNumRowsChanged; // 0x10
        char pad_14[0x4];
        FString inTableName; // 0x18
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_DbEditorOperate params{};
    params.InTransaction = (FString)InTransaction;
    params.outNumRowsChanged = (int32_t)outNumRowsChanged;
    params.inTableName = (FString)inTableName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    outNumRowsChanged = params.outNumRowsChanged;
    return (bool)params.ReturnValue;
}
