#pragma once
#include <cstdint>
#include "FUnavailableIconInfo.hpp"
#include "FVendorInfo.hpp"
#include "UObject.hpp"
class UDataTable;
#pragma pack(push, 1)
class UVendorManager : public UObject {
public:
    char pad_28[0xb8];
    UDataTable* VendorBroomPreviewDataTable; // 0xe0
    static UVendorManager* StaticClass();
    static void ReloadVendorStock(FName VendorID);
    static void RefreshVendorStockIfNeeded(FName Vendor);
    static void RefreshVendorStock(FName Vendor);
    void LoadVendorBroomPreviewActorClass(FName BroomID);
    TArray<FUnavailableIconInfo> GetUnavailableVendorItems(FName VendorID);
    static UVendorManager* Get();
    static TArray<FVendorInfo> BP_GetVendorsSellingItem(FName ItemId);
}; // Size: 0xe8
#pragma pack(pop)
