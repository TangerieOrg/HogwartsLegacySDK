#include "FDuelTechnique_UIData.hpp"
#include "UDuelTechniquesHUDBase.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
UDuelTechniquesHUDBase* UDuelTechniquesHUDBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DuelTechniquesHUDBase");
    return (UDuelTechniquesHUDBase*)res;
}
void UDuelTechniquesHUDBase::OnTimedTechniqueUpdated(FName TechniqueID) {}
void UDuelTechniquesHUDBase::OnDuelTechniquesInitialized(TArray<FDuelTechnique_UIData>& TechniqueUIData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DuelTechniquesHUDBase.OnDuelTechniquesInitialized"));
    struct Params_OnDuelTechniquesInitialized {
        TArray<FDuelTechnique_UIData> TechniqueUIData; // 0x0
    }; // Size: 0x10
    Params_OnDuelTechniquesInitialized params{};
    params.TechniqueUIData = (TArray<FDuelTechnique_UIData>)TechniqueUIData;
    ProcessEvent(func, &params);
    TechniqueUIData = params.TechniqueUIData;
}
void UDuelTechniquesHUDBase::OnDuelTechniqueUpdatedByID(FName TechniqueID, int32_t NewValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DuelTechniquesHUDBase.OnDuelTechniqueUpdatedByID"));
    struct Params_OnDuelTechniqueUpdatedByID {
        FName TechniqueID; // 0x0
        int32_t NewValue; // 0x8
    }; // Size: 0xc
    Params_OnDuelTechniqueUpdatedByID params{};
    params.TechniqueID = (FName)TechniqueID;
    params.NewValue = (int32_t)NewValue;
    ProcessEvent(func, &params);
}
void UDuelTechniquesHUDBase::OnDuelTechniquesDone() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DuelTechniquesHUDBase.OnDuelTechniquesDone"));
    struct Params_OnDuelTechniquesDone {
    }; // Size: 0x0
    Params_OnDuelTechniquesDone params{};
    ProcessEvent(func, &params);
}
void UDuelTechniquesHUDBase::OnDuelTechniqueProgressFailedByID(FName TechniqueID, bool IsNew) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DuelTechniquesHUDBase.OnDuelTechniqueProgressFailedByID"));
    struct Params_OnDuelTechniqueProgressFailedByID {
        FName TechniqueID; // 0x0
        bool IsNew; // 0x8
    }; // Size: 0x9
    Params_OnDuelTechniqueProgressFailedByID params{};
    params.TechniqueID = (FName)TechniqueID;
    params.IsNew = (bool)IsNew;
    ProcessEvent(func, &params);
}
void UDuelTechniquesHUDBase::OnDuelTechniqueProgressCompletedByID(FName TechniqueID, bool IsNew) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DuelTechniquesHUDBase.OnDuelTechniqueProgressCompletedByID"));
    struct Params_OnDuelTechniqueProgressCompletedByID {
        FName TechniqueID; // 0x0
        bool IsNew; // 0x8
    }; // Size: 0x9
    Params_OnDuelTechniqueProgressCompletedByID params{};
    params.TechniqueID = (FName)TechniqueID;
    params.IsNew = (bool)IsNew;
    ProcessEvent(func, &params);
}
void UDuelTechniquesHUDBase::HideUITimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DuelTechniquesHUDBase.HideUITimerExpired"));
    struct Params_HideUITimerExpired {
    }; // Size: 0x0
    Params_HideUITimerExpired params{};
    ProcessEvent(func, &params);
}
