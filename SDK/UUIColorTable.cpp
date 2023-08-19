#include "EColorVisionDeficiency.hpp"
#include "FDataTableRowHandle.hpp"
#include "FLinearColor.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UUIColorTable.hpp"
UUIColorTable* UUIColorTable::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.UIColorTable");
    return (UUIColorTable*)res;
}
FLinearColor UUIColorTable::CreateColorBlindColor(EColorVisionDeficiency pColorType, FLinearColor pColor, int32_t bCorrectDeficiency, int32_t bSimulateCorrectionWithDeficiency, int32_t Severity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIColorTable.CreateColorBlindColor"));
    struct Params_CreateColorBlindColor {
        EColorVisionDeficiency pColorType; // 0x0
        char pad_1[0x3];
        FLinearColor pColor; // 0x4
        int32_t bCorrectDeficiency; // 0x14
        int32_t bSimulateCorrectionWithDeficiency; // 0x18
        int32_t Severity; // 0x1c
        FLinearColor ReturnValue; // 0x20
    }; // Size: 0x30
    Params_CreateColorBlindColor params{};
    params.pColorType = (EColorVisionDeficiency)pColorType;
    params.pColor = (FLinearColor)pColor;
    params.bCorrectDeficiency = (int32_t)bCorrectDeficiency;
    params.bSimulateCorrectionWithDeficiency = (int32_t)bSimulateCorrectionWithDeficiency;
    params.Severity = (int32_t)Severity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
FLinearColor UUIColorTable::GetColorByTag(FName pColorTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIColorTable.GetColorByTag"));
    struct Params_GetColorByTag {
        FName pColorTag; // 0x0
        FLinearColor ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetColorByTag params{};
    params.pColorTag = (FName)pColorTag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
FLinearColor UUIColorTable::GetColorByRowHandleBP(FDataTableRowHandle pRowHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIColorTable.GetColorByRowHandleBP"));
    struct Params_GetColorByRowHandleBP {
        FDataTableRowHandle pRowHandle; // 0x0
        FLinearColor ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetColorByRowHandleBP params{};
    params.pRowHandle = (FDataTableRowHandle)pRowHandle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
FLinearColor UUIColorTable::GetColorByRowHandle(FDataTableRowHandle& pRowHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIColorTable.GetColorByRowHandle"));
    struct Params_GetColorByRowHandle {
        FDataTableRowHandle pRowHandle; // 0x0
        FLinearColor ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetColorByRowHandle params{};
    params.pRowHandle = (FDataTableRowHandle)pRowHandle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    pRowHandle = params.pRowHandle;
    return (FLinearColor)params.ReturnValue;
}
