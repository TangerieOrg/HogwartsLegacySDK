#pragma once
#include <cstdint>
#include "EEvaluateCurveTableResult\Type.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UDataTable;
struct FTableRowBase;
class UCurveTable;
#pragma pack(push, 1)
class UDataTableFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UDataTableFunctionLibrary* StaticClass();
    static void GetDataTableRowNames(UDataTable* Table, TArray<FName>& OutRowNames);
    static bool GetDataTableRowFromName(UDataTable* Table, FName RowName, FTableRowBase& OutRow);
    static TArray<FString> GetDataTableColumnAsString(UDataTable* DataTable, FName PropertyName);
    static void EvaluateCurveTableRow(UCurveTable* CurveTable, FName RowName, float InXY, EEvaluateCurveTableResult::Type& OutResult, float& OutXY, FString ContextString);
    static bool DoesDataTableRowExist(UDataTable* Table, FName RowName);
}; // Size: 0x28
#pragma pack(pop)
