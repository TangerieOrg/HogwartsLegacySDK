#include "FUnavailableIconInfo.hpp"
#include "FVendorInfo.hpp"
#include "UDataTable.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UVendorManager.hpp"
UVendorManager* UVendorManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.VendorManager");
    return (UVendorManager*)res;
}
void UVendorManager::LoadVendorBroomPreviewActorClass(FName BroomID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VendorManager.LoadVendorBroomPreviewActorClass"));
    struct Params_LoadVendorBroomPreviewActorClass {
        FName BroomID; // 0x0
    }; // Size: 0x8
    Params_LoadVendorBroomPreviewActorClass params{};
    params.BroomID = (FName)BroomID;
    ProcessEvent(func, &params);
}
void UVendorManager::ReloadVendorStock(FName VendorID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VendorManager.ReloadVendorStock"));
    struct Params_ReloadVendorStock {
        FName VendorID; // 0x0
    }; // Size: 0x8
    Params_ReloadVendorStock params{};
    params.VendorID = (FName)VendorID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UVendorManager::RefreshVendorStockIfNeeded(FName Vendor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VendorManager.RefreshVendorStockIfNeeded"));
    struct Params_RefreshVendorStockIfNeeded {
        FName Vendor; // 0x0
    }; // Size: 0x8
    Params_RefreshVendorStockIfNeeded params{};
    params.Vendor = (FName)Vendor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
TArray<FVendorInfo> UVendorManager::BP_GetVendorsSellingItem(FName ItemId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VendorManager.BP_GetVendorsSellingItem"));
    struct Params_BP_GetVendorsSellingItem {
        FName ItemId; // 0x0
        TArray<FVendorInfo> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_BP_GetVendorsSellingItem params{};
    params.ItemId = (FName)ItemId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FVendorInfo>)params.ReturnValue;
}
TArray<FUnavailableIconInfo> UVendorManager::GetUnavailableVendorItems(FName VendorID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VendorManager.GetUnavailableVendorItems"));
    struct Params_GetUnavailableVendorItems {
        FName VendorID; // 0x0
        TArray<FUnavailableIconInfo> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetUnavailableVendorItems params{};
    params.VendorID = (FName)VendorID;
    ProcessEvent(func, &params);
    return (TArray<FUnavailableIconInfo>)params.ReturnValue;
}
void UVendorManager::RefreshVendorStock(FName Vendor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VendorManager.RefreshVendorStock"));
    struct Params_RefreshVendorStock {
        FName Vendor; // 0x0
    }; // Size: 0x8
    Params_RefreshVendorStock params{};
    params.Vendor = (FName)Vendor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UVendorManager* UVendorManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VendorManager.Get"));
    struct Params_Get {
        UVendorManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UVendorManager*)params.ReturnValue;
}
