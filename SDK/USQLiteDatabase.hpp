#pragma once
#include <cstdint>
#include "FSQLiteIndex.hpp"
#include "FSQLiteQueryResult.hpp"
#include "FSQLiteTable.hpp"
#include "FSQLiteTableField.hpp"
#include "FSQLiteTableRowSimulator.hpp"
#include "UObject.hpp"
struct FSQLiteDatabaseReference;
struct FSQLiteQueryFinalizedQuery;
struct FSQLitePrimaryKey;
#pragma pack(push, 1)
class USQLiteDatabase : public UObject {
public:
    static USQLiteDatabase* StaticClass();
    static bool Vacuum(FString DatabaseName);
    static bool TruncateTable(FString DatabaseName, FString TableName);
    static bool RegisterDatabase(FString Name, FString Filename, bool RelativeToGameContentDirectory, bool InMemoryDatabase);
    static bool IsTableExists(FString DatabaseName, FString TableName);
    static bool IsDatabaseRegistered(FString DatabaseName);
    static void InsertRowsIntoTable(FString DatabaseName, FString TableName, TArray<FSQLiteTableRowSimulator>& rowsOfFields);
    static bool GetDataIntoObjectBP(FSQLiteDatabaseReference& DataSource, TArray<FString>& Fields, FSQLiteQueryFinalizedQuery& Query, UObject* ObjectToPopulate);
    static bool GetDataIntoObject(FString DatabaseName, FString Query, UObject* ObjectToPopulate);
    static FSQLiteQueryResult GetDataBP(FSQLiteDatabaseReference& DataSource, TArray<FString>& Fields, FSQLiteQueryFinalizedQuery& Query, int32_t MaxResults, int32_t ResultOffset);
    static FSQLiteQueryResult GetData(FString DatabaseName, FString Query);
    static bool ExecSql(FString DatabaseName, FString Query);
    static bool DropTable(FString DatabaseName, FString TableName);
    static bool DropIndex(FString DatabaseName, FString IndexName);
    static FSQLiteTable CreateTable(FString DatabaseName, FString TableName, TArray<FSQLiteTableField>& Fields, FSQLitePrimaryKey& PK);
    static bool CreateIndexes(FString DatabaseName, FString TableName, TArray<FSQLiteIndex>& Indexes);
    static bool CreateIndex(FString DatabaseName, FString TableName, FSQLiteIndex Index);
}; // Size: 0x28
#pragma pack(pop)
