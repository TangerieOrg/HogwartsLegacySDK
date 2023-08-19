#include "AActor.hpp"
#include "FInventoryResult.hpp"
#include "FLootDropInfo.hpp"
#include "FLootSlot.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "ULootDropComponent.hpp"
#include "UObject.hpp"
bool ULootDropComponent::IsContainerEmpty() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LootDropComponent.IsContainerEmpty"));
    struct Params_IsContainerEmpty {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsContainerEmpty params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ULootDropComponent* ULootDropComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LootDropComponent");
    return (ULootDropComponent*)res;
}
void ULootDropComponent::SetLoopGroup(FString lootGroup) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LootDropComponent.SetLoopGroup"));
    struct Params_SetLoopGroup {
        FString lootGroup; // 0x0
    }; // Size: 0x10
    Params_SetLoopGroup params{};
    params.lootGroup = (FString)lootGroup;
    ProcessEvent(func, &params);
}
void ULootDropComponent::ClearCurrentLootCategoryID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LootDropComponent.ClearCurrentLootCategoryID"));
    struct Params_ClearCurrentLootCategoryID {
    }; // Size: 0x0
    Params_ClearCurrentLootCategoryID params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULootDropComponent::SetupInventory() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LootDropComponent.SetupInventory"));
    struct Params_SetupInventory {
    }; // Size: 0x0
    Params_SetupInventory params{};
    ProcessEvent(func, &params);
}
void ULootDropComponent::SetLootLevel(int32_t Level) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LootDropComponent.SetLootLevel"));
    struct Params_SetLootLevel {
        int32_t Level; // 0x0
    }; // Size: 0x4
    Params_SetLootLevel params{};
    params.Level = (int32_t)Level;
    ProcessEvent(func, &params);
}
int32_t ULootDropComponent::GetLootLevel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LootDropComponent.GetLootLevel"));
    struct Params_GetLootLevel {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetLootLevel params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void ULootDropComponent::SetCurrentLootCategoryID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LootDropComponent.SetCurrentLootCategoryID"));
    struct Params_SetCurrentLootCategoryID {
    }; // Size: 0x0
    Params_SetCurrentLootCategoryID params{};
    ProcessEvent(func, &params);
}
void ULootDropComponent::SaveLootToInventory() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LootDropComponent.SaveLootToInventory"));
    struct Params_SaveLootToInventory {
    }; // Size: 0x0
    Params_SaveLootToInventory params{};
    ProcessEvent(func, &params);
}
void ULootDropComponent::SaveLootItemsToInventory(TArray<FLootSlot>& InLootItems) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LootDropComponent.SaveLootItemsToInventory"));
    struct Params_SaveLootItemsToInventory {
        TArray<FLootSlot> InLootItems; // 0x0
    }; // Size: 0x10
    Params_SaveLootItemsToInventory params{};
    params.InLootItems = (TArray<FLootSlot>)InLootItems;
    ProcessEvent(func, &params);
    InLootItems = params.InLootItems;
}
TArray<FLootSlot> ULootDropComponent::GetLootItems() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LootDropComponent.GetLootItems"));
    struct Params_GetLootItems {
        TArray<FLootSlot> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetLootItems params{};
    ProcessEvent(func, &params);
    return (TArray<FLootSlot>)params.ReturnValue;
}
ULootDropComponent* ULootDropComponent::GetLootDropComponent(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LootDropComponent.GetLootDropComponent"));
    struct Params_GetLootDropComponent {
        AActor* InActor; // 0x0
        ULootDropComponent* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetLootDropComponent params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ULootDropComponent*)params.ReturnValue;
}
TArray<FInventoryResult> ULootDropComponent::GetInventoryInfo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LootDropComponent.GetInventoryInfo"));
    struct Params_GetInventoryInfo {
        TArray<FInventoryResult> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetInventoryInfo params{};
    ProcessEvent(func, &params);
    return (TArray<FInventoryResult>)params.ReturnValue;
}
void ULootDropComponent::FillFromInventory() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LootDropComponent.FillFromInventory"));
    struct Params_FillFromInventory {
    }; // Size: 0x0
    Params_FillFromInventory params{};
    ProcessEvent(func, &params);
}
bool ULootDropComponent::CurrentInventoryHasUniqueItem() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LootDropComponent.CurrentInventoryHasUniqueItem"));
    struct Params_CurrentInventoryHasUniqueItem {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CurrentInventoryHasUniqueItem params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
