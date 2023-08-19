#include "EPerkState.hpp"
#include "FPerkTreeEntry.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPerksTree.hpp"
void UPerksTree::PerkCurriculumRefresh(FString Curriculum, int32_t Year) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.PerkCurriculumRefresh"));
    struct Params_PerkCurriculumRefresh {
        FString Curriculum; // 0x0
        int32_t Year; // 0x10
    }; // Size: 0x14
    Params_PerkCurriculumRefresh params{};
    params.Curriculum = (FString)Curriculum;
    params.Year = (int32_t)Year;
    ProcessEvent(func, &params);
}
UPerksTree* UPerksTree::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PerksTree");
    return (UPerksTree*)res;
}
bool UPerksTree::UpgradePerk(FString PerkID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.UpgradePerk"));
    struct Params_UpgradePerk {
        FString PerkID; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_UpgradePerk params{};
    params.PerkID = (FString)PerkID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UPerksTree::GetPerkLevel(FString PerkID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.GetPerkLevel"));
    struct Params_GetPerkLevel {
        FString PerkID; // 0x0
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetPerkLevel params{};
    params.PerkID = (FString)PerkID;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UPerksTree::UpdatePerkPoints(int32_t Amount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.UpdatePerkPoints"));
    struct Params_UpdatePerkPoints {
        int32_t Amount; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_UpdatePerkPoints params{};
    params.Amount = (int32_t)Amount;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPerksTree::IsPerkAvailable(FString PerkID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.IsPerkAvailable"));
    struct Params_IsPerkAvailable {
        FString PerkID; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsPerkAvailable params{};
    params.PerkID = (FString)PerkID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPerksTree::ResetPerks() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.ResetPerks"));
    struct Params_ResetPerks {
    }; // Size: 0x0
    Params_ResetPerks params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UPerksTree::PerkIsAvailable(FString PerkID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.PerkIsAvailable"));
    struct Params_PerkIsAvailable {
        FString PerkID; // 0x0
    }; // Size: 0x10
    Params_PerkIsAvailable params{};
    params.PerkID = (FString)PerkID;
    ProcessEvent(func, &params);
}
bool UPerksTree::PurchasePerk(FString PerkID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.PurchasePerk"));
    struct Params_PurchasePerk {
        FString PerkID; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_PurchasePerk params{};
    params.PerkID = (FString)PerkID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPerksTree::RemovePerk(FString InPerkID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.RemovePerk"));
    struct Params_RemovePerk {
        FString InPerkID; // 0x0
    }; // Size: 0x10
    Params_RemovePerk params{};
    params.InPerkID = (FString)InPerkID;
    ProcessEvent(func, &params);
}
FPerkTreeEntry UPerksTree::RefreshDataForSlot(FString PerkCategory, int32_t Row, int32_t Column) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.RefreshDataForSlot"));
    struct Params_RefreshDataForSlot {
        FString PerkCategory; // 0x0
        int32_t Row; // 0x10
        int32_t Column; // 0x14
        FPerkTreeEntry ReturnValue; // 0x18
    }; // Size: 0x88
    Params_RefreshDataForSlot params{};
    params.PerkCategory = (FString)PerkCategory;
    params.Row = (int32_t)Row;
    params.Column = (int32_t)Column;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FPerkTreeEntry)params.ReturnValue;
}
void UPerksTree::PerkUpdatePoints(int32_t Amount) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.PerkUpdatePoints"));
    struct Params_PerkUpdatePoints {
        int32_t Amount; // 0x0
    }; // Size: 0x4
    Params_PerkUpdatePoints params{};
    params.Amount = (int32_t)Amount;
    ProcessEvent(func, &params);
}
void UPerksTree::PerkShowPurchasedCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.PerkShowPurchasedCount"));
    struct Params_PerkShowPurchasedCount {
    }; // Size: 0x0
    Params_PerkShowPurchasedCount params{};
    ProcessEvent(func, &params);
}
int32_t UPerksTree::GetPurchasedPerkCount(FString CategoryID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.GetPurchasedPerkCount"));
    struct Params_GetPurchasedPerkCount {
        FString CategoryID; // 0x0
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetPurchasedPerkCount params{};
    params.CategoryID = (FString)CategoryID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UPerksTree::PerkActivateAllInCategory(FString Category) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.PerkActivateAllInCategory"));
    struct Params_PerkActivateAllInCategory {
        FString Category; // 0x0
    }; // Size: 0x10
    Params_PerkActivateAllInCategory params{};
    params.Category = (FString)Category;
    ProcessEvent(func, &params);
}
void UPerksTree::PerkShowPoints() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.PerkShowPoints"));
    struct Params_PerkShowPoints {
    }; // Size: 0x0
    Params_PerkShowPoints params{};
    ProcessEvent(func, &params);
}
UPerksTree* UPerksTree::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.Get"));
    struct Params_Get {
        UPerksTree* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UPerksTree*)params.ReturnValue;
}
void UPerksTree::PerkSetLevel(FString PerkID, int32_t Level) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.PerkSetLevel"));
    struct Params_PerkSetLevel {
        FString PerkID; // 0x0
        int32_t Level; // 0x10
    }; // Size: 0x14
    Params_PerkSetLevel params{};
    params.PerkID = (FString)PerkID;
    params.Level = (int32_t)Level;
    ProcessEvent(func, &params);
}
void UPerksTree::PerkIsUpgradeable(FString PerkID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.PerkIsUpgradeable"));
    struct Params_PerkIsUpgradeable {
        FString PerkID; // 0x0
    }; // Size: 0x10
    Params_PerkIsUpgradeable params{};
    params.PerkID = (FString)PerkID;
    ProcessEvent(func, &params);
}
void UPerksTree::PerkResetAllPerks() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.PerkResetAllPerks"));
    struct Params_PerkResetAllPerks {
    }; // Size: 0x0
    Params_PerkResetAllPerks params{};
    ProcessEvent(func, &params);
}
void UPerksTree::PerkPurchase(FString PerkID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.PerkPurchase"));
    struct Params_PerkPurchase {
        FString PerkID; // 0x0
    }; // Size: 0x10
    Params_PerkPurchase params{};
    params.PerkID = (FString)PerkID;
    ProcessEvent(func, &params);
}
void UPerksTree::PerkIsActive(FString PerkID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.PerkIsActive"));
    struct Params_PerkIsActive {
        FString PerkID; // 0x0
    }; // Size: 0x10
    Params_PerkIsActive params{};
    params.PerkID = (FString)PerkID;
    ProcessEvent(func, &params);
}
void UPerksTree::PerkActivateAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.PerkActivateAll"));
    struct Params_PerkActivateAll {
    }; // Size: 0x0
    Params_PerkActivateAll params{};
    ProcessEvent(func, &params);
}
void UPerksTree::PerkActivate(FString PerkID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.PerkActivate"));
    struct Params_PerkActivate {
        FString PerkID; // 0x0
    }; // Size: 0x10
    Params_PerkActivate params{};
    params.PerkID = (FString)PerkID;
    ProcessEvent(func, &params);
}
void UPerksTree::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
bool UPerksTree::IsPerkUpgradeable(FString PerkID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.IsPerkUpgradeable"));
    struct Params_IsPerkUpgradeable {
        FString PerkID; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsPerkUpgradeable params{};
    params.PerkID = (FString)PerkID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UPerksTree::GetTotalPerks(FString CategoryID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.GetTotalPerks"));
    struct Params_GetTotalPerks {
        FString CategoryID; // 0x0
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetTotalPerks params{};
    params.CategoryID = (FString)CategoryID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
EPerkState UPerksTree::GetPerkState(FString PerkID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.GetPerkState"));
    struct Params_GetPerkState {
        FString PerkID; // 0x0
        EPerkState ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetPerkState params{};
    params.PerkID = (FString)PerkID;
    ProcessEvent(func, &params);
    return (EPerkState)params.ReturnValue;
}
int32_t UPerksTree::GetPerkPoints() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.GetPerkPoints"));
    struct Params_GetPerkPoints {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPerkPoints params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
TArray<FPerkTreeEntry> UPerksTree::GetAllPerks(bool UIDisplayOnly, FString CategoryID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerksTree.GetAllPerks"));
    struct Params_GetAllPerks {
        bool UIDisplayOnly; // 0x0
        char pad_1[0x7];
        FString CategoryID; // 0x8
        TArray<FPerkTreeEntry> ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetAllPerks params{};
    params.UIDisplayOnly = (bool)UIDisplayOnly;
    params.CategoryID = (FString)CategoryID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FPerkTreeEntry>)params.ReturnValue;
}
