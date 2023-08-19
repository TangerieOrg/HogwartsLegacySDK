#pragma once
#include <cstdint>
#include "FSQLiteIndex.hpp"
#include "FSQLitePrimaryKey.hpp"
#include "FSQLiteQueryFinalizedQuery.hpp"
#include "FSQLiteQueryLogicExpectedNode.hpp"
#include "FSQLiteQueryTermExpectedNode.hpp"
#include "FSQLiteTableField.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#pragma pack(push, 1)
class USQLiteBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static USQLiteBlueprintFunctionLibrary* StaticClass();
    static FSQLiteTableField SQLiteTEXT(FString FieldName, bool PK, bool Unique);
    static FSQLiteTableField SQLiteREAL(FString FieldName, bool PK, bool Unique);
    static FSQLitePrimaryKey SQLitePrimaryKey(TArray<FSQLiteTableField> Fields);
    static FSQLiteTableField SQLiteNUMERIC(FString FieldName, bool PK, bool Unique);
    static FSQLiteTableField SQLiteINTEGER(FString FieldName, bool PK, bool AI, bool Unique);
    static FSQLiteIndex SQLiteIndexFunction(TArray<FSQLiteTableField> Fields, FString idxName, bool Unique);
    static FSQLiteQueryLogicExpectedNode QueryTerm(FSQLiteQueryTermExpectedNode& LogicOperation, FString Field, FString Operator, FString Value);
    static FSQLiteQueryTermExpectedNode QueryStart(FSQLiteQueryTermExpectedNode LogicOperationOrNone);
    static FSQLiteQueryTermExpectedNode QueryLogicOr(FSQLiteQueryLogicExpectedNode& LHS);
    static FSQLiteQueryTermExpectedNode QueryLogicAnd(FSQLiteQueryLogicExpectedNode& LHS);
    static FSQLiteQueryFinalizedQuery QueryFinal(FSQLiteQueryLogicExpectedNode& QueryEndNode);
    static FSQLiteQueryLogicExpectedNode QueryEnd(FSQLiteQueryLogicExpectedNode& LastQueryTerm);
    static int32_t CastToInt(FString SQLiteResultValue);
    static float CastToFloat(FString SQLiteResultValue);
    static bool CastToBoolean(FString SQLiteResultValue);
}; // Size: 0x28
#pragma pack(pop)
