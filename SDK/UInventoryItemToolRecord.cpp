#include "UFunction.hpp"
#include "UInventoryItemToolRecord.hpp"
#include "UToolRecord.hpp"
bool UInventoryItemToolRecord::IsLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryItemToolRecord.IsLoaded"));
    struct Params_IsLoaded {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLoaded params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UInventoryItemToolRecord* UInventoryItemToolRecord::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InventoryItemToolRecord");
    return (UInventoryItemToolRecord*)res;
}
void UInventoryItemToolRecord::LoadComplete__DelegateSignature(UInventoryItemToolRecord* ToolRecord) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.InventoryItemToolRecord.LoadComplete__DelegateSignature"));
    struct Params_LoadComplete__DelegateSignature {
        UInventoryItemToolRecord* ToolRecord; // 0x0
    }; // Size: 0x8
    Params_LoadComplete__DelegateSignature params{};
    params.ToolRecord = (UInventoryItemToolRecord*)ToolRecord;
    ProcessEvent(func, &params);
}
void UInventoryItemToolRecord::LoadComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InventoryItemToolRecord.LoadComplete"));
    struct Params_LoadComplete {
    }; // Size: 0x0
    Params_LoadComplete params{};
    ProcessEvent(func, &params);
}
