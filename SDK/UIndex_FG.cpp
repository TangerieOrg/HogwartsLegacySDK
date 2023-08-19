#include "UFunction.hpp"
#include "UIndex_FG.hpp"
#include "UTabPageWidget.hpp"
void UIndex_FG::OnSetActionsPct(float OldPct, float NewPct) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Index_FG.OnSetActionsPct"));
    struct Params_OnSetActionsPct {
        float OldPct; // 0x0
        float NewPct; // 0x4
    }; // Size: 0x8
    Params_OnSetActionsPct params{};
    params.OldPct = (float)OldPct;
    params.NewPct = (float)NewPct;
    ProcessEvent(func, &params);
}
UIndex_FG* UIndex_FG::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Index_FG");
    return (UIndex_FG*)res;
}
void UIndex_FG::OnGetAvailableAssignments(FString DisplayText) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Index_FG.OnGetAvailableAssignments"));
    struct Params_OnGetAvailableAssignments {
        FString DisplayText; // 0x0
    }; // Size: 0x10
    Params_OnGetAvailableAssignments params{};
    params.DisplayText = (FString)DisplayText;
    ProcessEvent(func, &params);
}
void UIndex_FG::OnSetPlayerLevel(int32_t NewLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Index_FG.OnSetPlayerLevel"));
    struct Params_OnSetPlayerLevel {
        int32_t NewLevel; // 0x0
    }; // Size: 0x4
    Params_OnSetPlayerLevel params{};
    params.NewLevel = (int32_t)NewLevel;
    ProcessEvent(func, &params);
}
void UIndex_FG::OnSetSchoolPct(float OldPct, float NewPct) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Index_FG.OnSetSchoolPct"));
    struct Params_OnSetSchoolPct {
        float OldPct; // 0x0
        float NewPct; // 0x4
    }; // Size: 0x8
    Params_OnSetSchoolPct params{};
    params.OldPct = (float)OldPct;
    params.NewPct = (float)NewPct;
    ProcessEvent(func, &params);
}
void UIndex_FG::GetAvailableAssignments() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Index_FG.GetAvailableAssignments"));
    struct Params_GetAvailableAssignments {
    }; // Size: 0x0
    Params_GetAvailableAssignments params{};
    ProcessEvent(func, &params);
}
