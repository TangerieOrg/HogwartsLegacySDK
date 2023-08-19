#include "FLootSlot.hpp"
#include "UFunction.hpp"
#include "ULootDrop.hpp"
#include "UObject.hpp"
ULootDrop* ULootDrop::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LootDrop");
    return (ULootDrop*)res;
}
FString ULootDrop::GetContainerID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LootDrop.GetContainerID"));
    struct Params_GetContainerID {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetContainerID params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void ULootDrop::SetContainerID(FString ContainerID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LootDrop.SetContainerID"));
    struct Params_SetContainerID {
        FString ContainerID; // 0x0
    }; // Size: 0x10
    Params_SetContainerID params{};
    params.ContainerID = (FString)ContainerID;
    ProcessEvent(func, &params);
}
TArray<FLootSlot> ULootDrop::GenerateContents(FString Category, int32_t Level, bool bForceGeneration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LootDrop.GenerateContents"));
    struct Params_GenerateContents {
        FString Category; // 0x0
        int32_t Level; // 0x10
        bool bForceGeneration; // 0x14
        char pad_15[0x3];
        TArray<FLootSlot> ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GenerateContents params{};
    params.Category = (FString)Category;
    params.Level = (int32_t)Level;
    params.bForceGeneration = (bool)bForceGeneration;
    ProcessEvent(func, &params);
    return (TArray<FLootSlot>)params.ReturnValue;
}
bool ULootDrop::RemoveItems(FString Item, int32_t Quantity, FString Variation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LootDrop.RemoveItems"));
    struct Params_RemoveItems {
        FString Item; // 0x0
        int32_t Quantity; // 0x10
        char pad_14[0x4];
        FString Variation; // 0x18
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_RemoveItems params{};
    params.Item = (FString)Item;
    params.Quantity = (int32_t)Quantity;
    params.Variation = (FString)Variation;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FLootSlot> ULootDrop::GetContents() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LootDrop.GetContents"));
    struct Params_GetContents {
        TArray<FLootSlot> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetContents params{};
    ProcessEvent(func, &params);
    return (TArray<FLootSlot>)params.ReturnValue;
}
void ULootDrop::RemoveAllItems() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LootDrop.RemoveAllItems"));
    struct Params_RemoveAllItems {
    }; // Size: 0x0
    Params_RemoveAllItems params{};
    ProcessEvent(func, &params);
}
void ULootDrop::LootDropGenerateContents(FString ContentCategory, int32_t Level) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LootDrop.LootDropGenerateContents"));
    struct Params_LootDropGenerateContents {
        FString ContentCategory; // 0x0
        int32_t Level; // 0x10
    }; // Size: 0x14
    Params_LootDropGenerateContents params{};
    params.ContentCategory = (FString)ContentCategory;
    params.Level = (int32_t)Level;
    ProcessEvent(func, &params);
}
bool ULootDrop::AddItems(FString Item, int32_t Quantity, FString Variation, bool IsUnique, bool IsAlreadyIdentified) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LootDrop.AddItems"));
    struct Params_AddItems {
        FString Item; // 0x0
        int32_t Quantity; // 0x10
        char pad_14[0x4];
        FString Variation; // 0x18
        bool IsUnique; // 0x28
        bool IsAlreadyIdentified; // 0x29
        bool ReturnValue; // 0x2a
    }; // Size: 0x2b
    Params_AddItems params{};
    params.Item = (FString)Item;
    params.Quantity = (int32_t)Quantity;
    params.Variation = (FString)Variation;
    params.IsUnique = (bool)IsUnique;
    params.IsAlreadyIdentified = (bool)IsAlreadyIdentified;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
