#include "FSQLiteIndex.hpp"
#include "FSQLitePrimaryKey.hpp"
#include "FSQLiteQueryFinalizedQuery.hpp"
#include "FSQLiteQueryLogicExpectedNode.hpp"
#include "FSQLiteQueryTermExpectedNode.hpp"
#include "FSQLiteTableField.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "USQLiteBlueprintFunctionLibrary.hpp"
FSQLiteQueryTermExpectedNode USQLiteBlueprintFunctionLibrary::QueryLogicOr(FSQLiteQueryLogicExpectedNode& LHS) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteBlueprintFunctionLibrary.QueryLogicOr"));
    struct Params_QueryLogicOr {
        FSQLiteQueryLogicExpectedNode LHS; // 0x0
        FSQLiteQueryTermExpectedNode ReturnValue; // 0x10
    }; // Size: 0x20
    Params_QueryLogicOr params{};
    params.LHS = (FSQLiteQueryLogicExpectedNode)LHS;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    LHS = params.LHS;
    return (FSQLiteQueryTermExpectedNode)params.ReturnValue;
}
FSQLitePrimaryKey USQLiteBlueprintFunctionLibrary::SQLitePrimaryKey(TArray<FSQLiteTableField> Fields) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteBlueprintFunctionLibrary.SQLitePrimaryKey"));
    struct Params_SQLitePrimaryKey {
        TArray<FSQLiteTableField> Fields; // 0x0
        FSQLitePrimaryKey ReturnValue; // 0x10
    }; // Size: 0x20
    Params_SQLitePrimaryKey params{};
    params.Fields = (TArray<FSQLiteTableField>)Fields;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FSQLitePrimaryKey)params.ReturnValue;
}
USQLiteBlueprintFunctionLibrary* USQLiteBlueprintFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/CISQLite3.SQLiteBlueprintFunctionLibrary");
    return (USQLiteBlueprintFunctionLibrary*)res;
}
FSQLiteTableField USQLiteBlueprintFunctionLibrary::SQLiteTEXT(FString FieldName, bool PK, bool Unique) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteBlueprintFunctionLibrary.SQLiteTEXT"));
    struct Params_SQLiteTEXT {
        FString FieldName; // 0x0
        bool PK; // 0x10
        bool Unique; // 0x11
        char pad_12[0x6];
        FSQLiteTableField ReturnValue; // 0x18
    }; // Size: 0x58
    Params_SQLiteTEXT params{};
    params.FieldName = (FString)FieldName;
    params.PK = (bool)PK;
    params.Unique = (bool)Unique;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FSQLiteTableField)params.ReturnValue;
}
FSQLiteTableField USQLiteBlueprintFunctionLibrary::SQLiteREAL(FString FieldName, bool PK, bool Unique) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteBlueprintFunctionLibrary.SQLiteREAL"));
    struct Params_SQLiteREAL {
        FString FieldName; // 0x0
        bool PK; // 0x10
        bool Unique; // 0x11
        char pad_12[0x6];
        FSQLiteTableField ReturnValue; // 0x18
    }; // Size: 0x58
    Params_SQLiteREAL params{};
    params.FieldName = (FString)FieldName;
    params.PK = (bool)PK;
    params.Unique = (bool)Unique;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FSQLiteTableField)params.ReturnValue;
}
FSQLiteTableField USQLiteBlueprintFunctionLibrary::SQLiteNUMERIC(FString FieldName, bool PK, bool Unique) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteBlueprintFunctionLibrary.SQLiteNUMERIC"));
    struct Params_SQLiteNUMERIC {
        FString FieldName; // 0x0
        bool PK; // 0x10
        bool Unique; // 0x11
        char pad_12[0x6];
        FSQLiteTableField ReturnValue; // 0x18
    }; // Size: 0x58
    Params_SQLiteNUMERIC params{};
    params.FieldName = (FString)FieldName;
    params.PK = (bool)PK;
    params.Unique = (bool)Unique;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FSQLiteTableField)params.ReturnValue;
}
FSQLiteTableField USQLiteBlueprintFunctionLibrary::SQLiteINTEGER(FString FieldName, bool PK, bool AI, bool Unique) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteBlueprintFunctionLibrary.SQLiteINTEGER"));
    struct Params_SQLiteINTEGER {
        FString FieldName; // 0x0
        bool PK; // 0x10
        bool AI; // 0x11
        bool Unique; // 0x12
        char pad_13[0x5];
        FSQLiteTableField ReturnValue; // 0x18
    }; // Size: 0x58
    Params_SQLiteINTEGER params{};
    params.FieldName = (FString)FieldName;
    params.PK = (bool)PK;
    params.AI = (bool)AI;
    params.Unique = (bool)Unique;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FSQLiteTableField)params.ReturnValue;
}
FSQLiteIndex USQLiteBlueprintFunctionLibrary::SQLiteIndexFunction(TArray<FSQLiteTableField> Fields, FString idxName, bool Unique) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteBlueprintFunctionLibrary.SQLiteIndexFunction"));
    struct Params_SQLiteIndexFunction {
        TArray<FSQLiteTableField> Fields; // 0x0
        FString idxName; // 0x10
        bool Unique; // 0x20
        char pad_21[0x7];
        FSQLiteIndex ReturnValue; // 0x28
    }; // Size: 0x48
    Params_SQLiteIndexFunction params{};
    params.Fields = (TArray<FSQLiteTableField>)Fields;
    params.idxName = (FString)idxName;
    params.Unique = (bool)Unique;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FSQLiteIndex)params.ReturnValue;
}
FSQLiteQueryLogicExpectedNode USQLiteBlueprintFunctionLibrary::QueryTerm(FSQLiteQueryTermExpectedNode& LogicOperation, FString Field, FString Operator, FString Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteBlueprintFunctionLibrary.QueryTerm"));
    struct Params_QueryTerm {
        FSQLiteQueryTermExpectedNode LogicOperation; // 0x0
        FString Field; // 0x10
        FString Operator; // 0x20
        FString Value; // 0x30
        FSQLiteQueryLogicExpectedNode ReturnValue; // 0x40
    }; // Size: 0x50
    Params_QueryTerm params{};
    params.LogicOperation = (FSQLiteQueryTermExpectedNode)LogicOperation;
    params.Field = (FString)Field;
    params.Operator = (FString)Operator;
    params.Value = (FString)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    LogicOperation = params.LogicOperation;
    return (FSQLiteQueryLogicExpectedNode)params.ReturnValue;
}
FSQLiteQueryTermExpectedNode USQLiteBlueprintFunctionLibrary::QueryStart(FSQLiteQueryTermExpectedNode LogicOperationOrNone) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteBlueprintFunctionLibrary.QueryStart"));
    struct Params_QueryStart {
        FSQLiteQueryTermExpectedNode LogicOperationOrNone; // 0x0
        FSQLiteQueryTermExpectedNode ReturnValue; // 0x10
    }; // Size: 0x20
    Params_QueryStart params{};
    params.LogicOperationOrNone = (FSQLiteQueryTermExpectedNode)LogicOperationOrNone;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FSQLiteQueryTermExpectedNode)params.ReturnValue;
}
FSQLiteQueryTermExpectedNode USQLiteBlueprintFunctionLibrary::QueryLogicAnd(FSQLiteQueryLogicExpectedNode& LHS) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteBlueprintFunctionLibrary.QueryLogicAnd"));
    struct Params_QueryLogicAnd {
        FSQLiteQueryLogicExpectedNode LHS; // 0x0
        FSQLiteQueryTermExpectedNode ReturnValue; // 0x10
    }; // Size: 0x20
    Params_QueryLogicAnd params{};
    params.LHS = (FSQLiteQueryLogicExpectedNode)LHS;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    LHS = params.LHS;
    return (FSQLiteQueryTermExpectedNode)params.ReturnValue;
}
FSQLiteQueryFinalizedQuery USQLiteBlueprintFunctionLibrary::QueryFinal(FSQLiteQueryLogicExpectedNode& QueryEndNode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteBlueprintFunctionLibrary.QueryFinal"));
    struct Params_QueryFinal {
        FSQLiteQueryLogicExpectedNode QueryEndNode; // 0x0
        FSQLiteQueryFinalizedQuery ReturnValue; // 0x10
    }; // Size: 0x20
    Params_QueryFinal params{};
    params.QueryEndNode = (FSQLiteQueryLogicExpectedNode)QueryEndNode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    QueryEndNode = params.QueryEndNode;
    return (FSQLiteQueryFinalizedQuery)params.ReturnValue;
}
FSQLiteQueryLogicExpectedNode USQLiteBlueprintFunctionLibrary::QueryEnd(FSQLiteQueryLogicExpectedNode& LastQueryTerm) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteBlueprintFunctionLibrary.QueryEnd"));
    struct Params_QueryEnd {
        FSQLiteQueryLogicExpectedNode LastQueryTerm; // 0x0
        FSQLiteQueryLogicExpectedNode ReturnValue; // 0x10
    }; // Size: 0x20
    Params_QueryEnd params{};
    params.LastQueryTerm = (FSQLiteQueryLogicExpectedNode)LastQueryTerm;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    LastQueryTerm = params.LastQueryTerm;
    return (FSQLiteQueryLogicExpectedNode)params.ReturnValue;
}
int32_t USQLiteBlueprintFunctionLibrary::CastToInt(FString SQLiteResultValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteBlueprintFunctionLibrary.CastToInt"));
    struct Params_CastToInt {
        FString SQLiteResultValue; // 0x0
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_CastToInt params{};
    params.SQLiteResultValue = (FString)SQLiteResultValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
float USQLiteBlueprintFunctionLibrary::CastToFloat(FString SQLiteResultValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteBlueprintFunctionLibrary.CastToFloat"));
    struct Params_CastToFloat {
        FString SQLiteResultValue; // 0x0
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_CastToFloat params{};
    params.SQLiteResultValue = (FString)SQLiteResultValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool USQLiteBlueprintFunctionLibrary::CastToBoolean(FString SQLiteResultValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CISQLite3.SQLiteBlueprintFunctionLibrary.CastToBoolean"));
    struct Params_CastToBoolean {
        FString SQLiteResultValue; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_CastToBoolean params{};
    params.SQLiteResultValue = (FString)SQLiteResultValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
