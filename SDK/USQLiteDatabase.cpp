#include "FSQLiteDatabaseReference.hpp"
#include "FSQLiteIndex.hpp"
#include "FSQLitePrimaryKey.hpp"
#include "FSQLiteQueryFinalizedQuery.hpp"
#include "FSQLiteQueryResult.hpp"
#include "FSQLiteTable.hpp"
#include "FSQLiteTableField.hpp"
#include "FSQLiteTableRowSimulator.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USQLiteDatabase.hpp"
bool USQLiteDatabase::TruncateTable(FString DatabaseName, FString TableName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteDatabase.TruncateTable"));
    struct Params_TruncateTable {
        FString DatabaseName; // 0x0
        FString TableName; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_TruncateTable params{};
    params.DatabaseName = (FString)DatabaseName;
    params.TableName = (FString)TableName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
USQLiteDatabase* USQLiteDatabase::StaticClass() {
    static auto res = find_uobject("Class /Script/CISQLite3.SQLiteDatabase");
    return (USQLiteDatabase*)res;
}
bool USQLiteDatabase::Vacuum(FString DatabaseName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteDatabase.Vacuum"));
    struct Params_Vacuum {
        FString DatabaseName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_Vacuum params{};
    params.DatabaseName = (FString)DatabaseName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USQLiteDatabase::GetDataIntoObjectBP(FSQLiteDatabaseReference& DataSource, TArray<FString>& Fields, FSQLiteQueryFinalizedQuery& Query, UObject* ObjectToPopulate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteDatabase.GetDataIntoObjectBP"));
    struct Params_GetDataIntoObjectBP {
        FSQLiteDatabaseReference DataSource; // 0x0
        TArray<FString> Fields; // 0x20
        FSQLiteQueryFinalizedQuery Query; // 0x30
        UObject* ObjectToPopulate; // 0x40
        bool ReturnValue; // 0x48
    }; // Size: 0x49
    Params_GetDataIntoObjectBP params{};
    params.DataSource = (FSQLiteDatabaseReference)DataSource;
    params.Fields = (TArray<FString>)Fields;
    params.Query = (FSQLiteQueryFinalizedQuery)Query;
    params.ObjectToPopulate = (UObject*)ObjectToPopulate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    DataSource = params.DataSource;
    Fields = params.Fields;
    Query = params.Query;
    return (bool)params.ReturnValue;
}
bool USQLiteDatabase::RegisterDatabase(FString Name, FString Filename, bool RelativeToGameContentDirectory, bool InMemoryDatabase) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteDatabase.RegisterDatabase"));
    struct Params_RegisterDatabase {
        FString Name; // 0x0
        FString Filename; // 0x10
        bool RelativeToGameContentDirectory; // 0x20
        bool InMemoryDatabase; // 0x21
        bool ReturnValue; // 0x22
    }; // Size: 0x23
    Params_RegisterDatabase params{};
    params.Name = (FString)Name;
    params.Filename = (FString)Filename;
    params.RelativeToGameContentDirectory = (bool)RelativeToGameContentDirectory;
    params.InMemoryDatabase = (bool)InMemoryDatabase;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USQLiteDatabase::InsertRowsIntoTable(FString DatabaseName, FString TableName, TArray<FSQLiteTableRowSimulator>& rowsOfFields) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteDatabase.InsertRowsIntoTable"));
    struct Params_InsertRowsIntoTable {
        FString DatabaseName; // 0x0
        FString TableName; // 0x10
        TArray<FSQLiteTableRowSimulator> rowsOfFields; // 0x20
    }; // Size: 0x30
    Params_InsertRowsIntoTable params{};
    params.DatabaseName = (FString)DatabaseName;
    params.TableName = (FString)TableName;
    params.rowsOfFields = (TArray<FSQLiteTableRowSimulator>)rowsOfFields;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    rowsOfFields = params.rowsOfFields;
}
bool USQLiteDatabase::IsDatabaseRegistered(FString DatabaseName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteDatabase.IsDatabaseRegistered"));
    struct Params_IsDatabaseRegistered {
        FString DatabaseName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsDatabaseRegistered params{};
    params.DatabaseName = (FString)DatabaseName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USQLiteDatabase::IsTableExists(FString DatabaseName, FString TableName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteDatabase.IsTableExists"));
    struct Params_IsTableExists {
        FString DatabaseName; // 0x0
        FString TableName; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_IsTableExists params{};
    params.DatabaseName = (FString)DatabaseName;
    params.TableName = (FString)TableName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USQLiteDatabase::GetDataIntoObject(FString DatabaseName, FString Query, UObject* ObjectToPopulate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteDatabase.GetDataIntoObject"));
    struct Params_GetDataIntoObject {
        FString DatabaseName; // 0x0
        FString Query; // 0x10
        UObject* ObjectToPopulate; // 0x20
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_GetDataIntoObject params{};
    params.DatabaseName = (FString)DatabaseName;
    params.Query = (FString)Query;
    params.ObjectToPopulate = (UObject*)ObjectToPopulate;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FSQLiteQueryResult USQLiteDatabase::GetDataBP(FSQLiteDatabaseReference& DataSource, TArray<FString>& Fields, FSQLiteQueryFinalizedQuery& Query, int32_t MaxResults, int32_t ResultOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteDatabase.GetDataBP"));
    struct Params_GetDataBP {
        FSQLiteDatabaseReference DataSource; // 0x0
        TArray<FString> Fields; // 0x20
        FSQLiteQueryFinalizedQuery Query; // 0x30
        int32_t MaxResults; // 0x40
        int32_t ResultOffset; // 0x44
        FSQLiteQueryResult ReturnValue; // 0x48
    }; // Size: 0x70
    Params_GetDataBP params{};
    params.DataSource = (FSQLiteDatabaseReference)DataSource;
    params.Fields = (TArray<FString>)Fields;
    params.Query = (FSQLiteQueryFinalizedQuery)Query;
    params.MaxResults = (int32_t)MaxResults;
    params.ResultOffset = (int32_t)ResultOffset;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    DataSource = params.DataSource;
    Fields = params.Fields;
    Query = params.Query;
    return (FSQLiteQueryResult)params.ReturnValue;
}
FSQLiteQueryResult USQLiteDatabase::GetData(FString DatabaseName, FString Query) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteDatabase.GetData"));
    struct Params_GetData {
        FString DatabaseName; // 0x0
        FString Query; // 0x10
        FSQLiteQueryResult ReturnValue; // 0x20
    }; // Size: 0x48
    Params_GetData params{};
    params.DatabaseName = (FString)DatabaseName;
    params.Query = (FString)Query;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FSQLiteQueryResult)params.ReturnValue;
}
bool USQLiteDatabase::ExecSql(FString DatabaseName, FString Query) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteDatabase.ExecSql"));
    struct Params_ExecSql {
        FString DatabaseName; // 0x0
        FString Query; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_ExecSql params{};
    params.DatabaseName = (FString)DatabaseName;
    params.Query = (FString)Query;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USQLiteDatabase::DropTable(FString DatabaseName, FString TableName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteDatabase.DropTable"));
    struct Params_DropTable {
        FString DatabaseName; // 0x0
        FString TableName; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_DropTable params{};
    params.DatabaseName = (FString)DatabaseName;
    params.TableName = (FString)TableName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool USQLiteDatabase::DropIndex(FString DatabaseName, FString IndexName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteDatabase.DropIndex"));
    struct Params_DropIndex {
        FString DatabaseName; // 0x0
        FString IndexName; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_DropIndex params{};
    params.DatabaseName = (FString)DatabaseName;
    params.IndexName = (FString)IndexName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FSQLiteTable USQLiteDatabase::CreateTable(FString DatabaseName, FString TableName, TArray<FSQLiteTableField>& Fields, FSQLitePrimaryKey& PK) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteDatabase.CreateTable"));
    struct Params_CreateTable {
        FString DatabaseName; // 0x0
        FString TableName; // 0x10
        TArray<FSQLiteTableField> Fields; // 0x20
        FSQLitePrimaryKey PK; // 0x30
        FSQLiteTable ReturnValue; // 0x40
    }; // Size: 0x88
    Params_CreateTable params{};
    params.DatabaseName = (FString)DatabaseName;
    params.TableName = (FString)TableName;
    params.Fields = (TArray<FSQLiteTableField>)Fields;
    params.PK = (FSQLitePrimaryKey)PK;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Fields = params.Fields;
    PK = params.PK;
    return (FSQLiteTable)params.ReturnValue;
}
bool USQLiteDatabase::CreateIndexes(FString DatabaseName, FString TableName, TArray<FSQLiteIndex>& Indexes) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteDatabase.CreateIndexes"));
    struct Params_CreateIndexes {
        FString DatabaseName; // 0x0
        FString TableName; // 0x10
        TArray<FSQLiteIndex> Indexes; // 0x20
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_CreateIndexes params{};
    params.DatabaseName = (FString)DatabaseName;
    params.TableName = (FString)TableName;
    params.Indexes = (TArray<FSQLiteIndex>)Indexes;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Indexes = params.Indexes;
    return (bool)params.ReturnValue;
}
bool USQLiteDatabase::CreateIndex(FString DatabaseName, FString TableName, FSQLiteIndex Index) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteDatabase.CreateIndex"));
    struct Params_CreateIndex {
        FString DatabaseName; // 0x0
        FString TableName; // 0x10
        FSQLiteIndex Index; // 0x20
        bool ReturnValue; // 0x40
    }; // Size: 0x41
    Params_CreateIndex params{};
    params.DatabaseName = (FString)DatabaseName;
    params.TableName = (FString)TableName;
    params.Index = (FSQLiteIndex)Index;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
