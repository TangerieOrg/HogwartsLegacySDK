#include "EEvaluateCurveTableResult\Type.hpp"
#include "FTableRowBase.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UCurveTable.hpp"
#include "UDataTable.hpp"
#include "UDataTableFunctionLibrary.hpp"
#include "UFunction.hpp"
bool UDataTableFunctionLibrary::DoesDataTableRowExist(UDataTable* Table, FName RowName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DataTableFunctionLibrary.DoesDataTableRowExist"));
    struct Params_DoesDataTableRowExist {
        UDataTable* Table; // 0x0
        FName RowName; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_DoesDataTableRowExist params{};
    params.Table = (UDataTable*)Table;
    params.RowName = (FName)RowName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UDataTableFunctionLibrary* UDataTableFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DataTableFunctionLibrary");
    return (UDataTableFunctionLibrary*)res;
}
void UDataTableFunctionLibrary::GetDataTableRowNames(UDataTable* Table, TArray<FName>& OutRowNames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DataTableFunctionLibrary.GetDataTableRowNames"));
    struct Params_GetDataTableRowNames {
        UDataTable* Table; // 0x0
        TArray<FName> OutRowNames; // 0x8
    }; // Size: 0x18
    Params_GetDataTableRowNames params{};
    params.Table = (UDataTable*)Table;
    params.OutRowNames = (TArray<FName>)OutRowNames;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutRowNames = params.OutRowNames;
}
bool UDataTableFunctionLibrary::GetDataTableRowFromName(UDataTable* Table, FName RowName, FTableRowBase& OutRow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DataTableFunctionLibrary.GetDataTableRowFromName"));
    struct Params_GetDataTableRowFromName {
        UDataTable* Table; // 0x0
        FName RowName; // 0x8
        FTableRowBase OutRow; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_GetDataTableRowFromName params{};
    params.Table = (UDataTable*)Table;
    params.RowName = (FName)RowName;
    params.OutRow = (FTableRowBase)OutRow;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutRow = params.OutRow;
    return (bool)params.ReturnValue;
}
TArray<FString> UDataTableFunctionLibrary::GetDataTableColumnAsString(UDataTable* DataTable, FName PropertyName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DataTableFunctionLibrary.GetDataTableColumnAsString"));
    struct Params_GetDataTableColumnAsString {
        UDataTable* DataTable; // 0x0
        FName PropertyName; // 0x8
        TArray<FString> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetDataTableColumnAsString params{};
    params.DataTable = (UDataTable*)DataTable;
    params.PropertyName = (FName)PropertyName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FString>)params.ReturnValue;
}
void UDataTableFunctionLibrary::EvaluateCurveTableRow(UCurveTable* CurveTable, FName RowName, float InXY, EEvaluateCurveTableResult::Type& OutResult, float& OutXY, FString ContextString) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.DataTableFunctionLibrary.EvaluateCurveTableRow"));
    struct Params_EvaluateCurveTableRow {
        UCurveTable* CurveTable; // 0x0
        FName RowName; // 0x8
        float InXY; // 0x10
        EEvaluateCurveTableResult::Type OutResult; // 0x14
        char pad_15[0x3];
        float OutXY; // 0x18
        char pad_1c[0x4];
        FString ContextString; // 0x20
    }; // Size: 0x30
    Params_EvaluateCurveTableRow params{};
    params.CurveTable = (UCurveTable*)CurveTable;
    params.RowName = (FName)RowName;
    params.InXY = (float)InXY;
    params.OutResult = (EEvaluateCurveTableResult::Type)OutResult;
    params.OutXY = (float)OutXY;
    params.ContextString = (FString)ContextString;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutResult = params.OutResult;
    OutXY = params.OutXY;
}
