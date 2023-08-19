#include "FSaveGameInfo.hpp"
#include "UFunction.hpp"
#include "UPhoenixUserWidget.hpp"
#include "USaveGameWidget.hpp"
void USaveGameWidget::OnSaveGameFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveGameWidget.OnSaveGameFailed"));
    struct Params_OnSaveGameFailed {
    }; // Size: 0x0
    Params_OnSaveGameFailed params{};
    ProcessEvent(func, &params);
}
USaveGameWidget* USaveGameWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SaveGameWidget");
    return (USaveGameWidget*)res;
}
bool USaveGameWidget::SaveGameInSlot(int32_t SaveSlot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveGameWidget.SaveGameInSlot"));
    struct Params_SaveGameInSlot {
        int32_t SaveSlot; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_SaveGameInSlot params{};
    params.SaveSlot = (int32_t)SaveSlot;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void USaveGameWidget::RefreshListAfterSaveFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveGameWidget.RefreshListAfterSaveFailed"));
    struct Params_RefreshListAfterSaveFailed {
    }; // Size: 0x0
    Params_RefreshListAfterSaveFailed params{};
    ProcessEvent(func, &params);
}
void USaveGameWidget::OnAsyncSaveCompleted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveGameWidget.OnAsyncSaveCompleted"));
    struct Params_OnAsyncSaveCompleted {
    }; // Size: 0x0
    Params_OnAsyncSaveCompleted params{};
    ProcessEvent(func, &params);
}
void USaveGameWidget::RefreshListAfterSave(TArray<FSaveGameInfo>& SaveData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveGameWidget.RefreshListAfterSave"));
    struct Params_RefreshListAfterSave {
        TArray<FSaveGameInfo> SaveData; // 0x0
    }; // Size: 0x10
    Params_RefreshListAfterSave params{};
    params.SaveData = (TArray<FSaveGameInfo>)SaveData;
    ProcessEvent(func, &params);
    SaveData = params.SaveData;
}
int32_t USaveGameWidget::ParseSlotNumFromName(FString SlotName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveGameWidget.ParseSlotNumFromName"));
    struct Params_ParseSlotNumFromName {
        FString SlotName; // 0x0
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_ParseSlotNumFromName params{};
    params.SlotName = (FString)SlotName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void USaveGameWidget::GetUserSavesBySlot(TArray<FSaveGameInfo>& SaveData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveGameWidget.GetUserSavesBySlot"));
    struct Params_GetUserSavesBySlot {
        TArray<FSaveGameInfo> SaveData; // 0x0
    }; // Size: 0x10
    Params_GetUserSavesBySlot params{};
    params.SaveData = (TArray<FSaveGameInfo>)SaveData;
    ProcessEvent(func, &params);
    SaveData = params.SaveData;
}
bool USaveGameWidget::DeleteGameFromSlot(int32_t SaveSlot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SaveGameWidget.DeleteGameFromSlot"));
    struct Params_DeleteGameFromSlot {
        int32_t SaveSlot; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_DeleteGameFromSlot params{};
    params.SaveSlot = (int32_t)SaveSlot;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
