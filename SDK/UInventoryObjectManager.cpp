#include "AActor.hpp"
#include "FGameplayProperty_Int.hpp"
#include "UFunction.hpp"
#include "UInventoryObjectManager.hpp"
#include "UPhxDbRegistryTypeManager.hpp"
UInventoryObjectManager* UInventoryObjectManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InventoryObjectManager");
    return (UInventoryObjectManager*)res;
}
void UInventoryObjectManager::SaveData(FString InItemID, AActor* TargetActor, uint32_t inParentUID, uint32_t inOverrideUID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryObjectManager.SaveData"));
    struct Params_SaveData {
        FString InItemID; // 0x0
        AActor* TargetActor; // 0x10
        uint32_t inParentUID; // 0x18
        uint32_t inOverrideUID; // 0x1c
    }; // Size: 0x20
    Params_SaveData params{};
    params.InItemID = (FString)InItemID;
    params.TargetActor = (AActor*)TargetActor;
    params.inParentUID = (uint32_t)inParentUID;
    params.inOverrideUID = (uint32_t)inOverrideUID;
    ProcessEvent(func, &params);
}
