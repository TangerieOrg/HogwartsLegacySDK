#include "AConjurationSpellTool.hpp"
#include "ATransfigurationSpellToolBase.hpp"
#include "FConjuredHistoryItem.hpp"
#include "FLockableTransfigurationItem.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
void AConjurationSpellTool::CannotHoldConjuring() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSpellTool.CannotHoldConjuring"));
    struct Params_CannotHoldConjuring {
    }; // Size: 0x0
    Params_CannotHoldConjuring params{};
    ProcessEvent(func, &params);
}
void AConjurationSpellTool::ShowItemPreview(FName InItemID, FName InColorID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSpellTool.ShowItemPreview"));
    struct Params_ShowItemPreview {
        FName InItemID; // 0x0
        FName InColorID; // 0x8
    }; // Size: 0x10
    Params_ShowItemPreview params{};
    params.InItemID = (FName)InItemID;
    params.InColorID = (FName)InColorID;
    ProcessEvent(func, &params);
}
AConjurationSpellTool* AConjurationSpellTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ConjurationSpellTool");
    return (AConjurationSpellTool*)res;
}
void AConjurationSpellTool::SetCategory(FName CategoryID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSpellTool.SetCategory"));
    struct Params_SetCategory {
        FName CategoryID; // 0x0
    }; // Size: 0x8
    Params_SetCategory params{};
    params.CategoryID = (FName)CategoryID;
    ProcessEvent(func, &params);
}
void AConjurationSpellTool::UpdatePreviewResourceRequirementsMet() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSpellTool.UpdatePreviewResourceRequirementsMet"));
    struct Params_UpdatePreviewResourceRequirementsMet {
    }; // Size: 0x0
    Params_UpdatePreviewResourceRequirementsMet params{};
    ProcessEvent(func, &params);
}
void AConjurationSpellTool::UpdateHoldConjuring(float TimeRatio) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSpellTool.UpdateHoldConjuring"));
    struct Params_UpdateHoldConjuring {
        float TimeRatio; // 0x0
    }; // Size: 0x4
    Params_UpdateHoldConjuring params{};
    params.TimeRatio = (float)TimeRatio;
    ProcessEvent(func, &params);
}
void AConjurationSpellTool::UndoLastConjuredItem() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSpellTool.UndoLastConjuredItem"));
    struct Params_UndoLastConjuredItem {
    }; // Size: 0x0
    Params_UndoLastConjuredItem params{};
    ProcessEvent(func, &params);
}
void AConjurationSpellTool::ConjureMenuFullStop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSpellTool.ConjureMenuFullStop"));
    struct Params_ConjureMenuFullStop {
    }; // Size: 0x0
    Params_ConjureMenuFullStop params{};
    ProcessEvent(func, &params);
}
void AConjurationSpellTool::StartHoldConjuring() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSpellTool.StartHoldConjuring"));
    struct Params_StartHoldConjuring {
    }; // Size: 0x0
    Params_StartHoldConjuring params{};
    ProcessEvent(func, &params);
}
TArray<FLockableTransfigurationItem> AConjurationSpellTool::GetSubCategories(FName CategoryName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSpellTool.GetSubCategories"));
    struct Params_GetSubCategories {
        FName CategoryName; // 0x0
        TArray<FLockableTransfigurationItem> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetSubCategories params{};
    params.CategoryName = (FName)CategoryName;
    ProcessEvent(func, &params);
    return (TArray<FLockableTransfigurationItem>)params.ReturnValue;
}
void AConjurationSpellTool::CancelHoldConjuring(float TimeRatio) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSpellTool.CancelHoldConjuring"));
    struct Params_CancelHoldConjuring {
        float TimeRatio; // 0x0
    }; // Size: 0x4
    Params_CancelHoldConjuring params{};
    params.TimeRatio = (float)TimeRatio;
    ProcessEvent(func, &params);
}
TArray<FLockableTransfigurationItem> AConjurationSpellTool::GetItemList() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSpellTool.GetItemList"));
    struct Params_GetItemList {
        TArray<FLockableTransfigurationItem> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetItemList params{};
    ProcessEvent(func, &params);
    return (TArray<FLockableTransfigurationItem>)params.ReturnValue;
}
FLockableTransfigurationItem AConjurationSpellTool::GetItemData(FName ItemOrCategoryName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSpellTool.GetItemData"));
    struct Params_GetItemData {
        FName ItemOrCategoryName; // 0x0
        FLockableTransfigurationItem ReturnValue; // 0x8
    }; // Size: 0x78
    Params_GetItemData params{};
    params.ItemOrCategoryName = (FName)ItemOrCategoryName;
    ProcessEvent(func, &params);
    return (FLockableTransfigurationItem)params.ReturnValue;
}
FName AConjurationSpellTool::GetCurrentCategory() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSpellTool.GetCurrentCategory"));
    struct Params_GetCurrentCategory {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCurrentCategory params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FString AConjurationSpellTool::GetCategoryTextKey() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSpellTool.GetCategoryTextKey"));
    struct Params_GetCategoryTextKey {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetCategoryTextKey params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void AConjurationSpellTool::FinishHoldConjuring() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSpellTool.FinishHoldConjuring"));
    struct Params_FinishHoldConjuring {
    }; // Size: 0x0
    Params_FinishHoldConjuring params{};
    ProcessEvent(func, &params);
}
bool AConjurationSpellTool::CanUndoLastItem() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ConjurationSpellTool.CanUndoLastItem"));
    struct Params_CanUndoLastItem {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanUndoLastItem params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
