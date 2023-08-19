#include "UFunction.hpp"
#include "UObject.hpp"
#include "UVendorStock.hpp"
UVendorStock* UVendorStock::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.VendorStock");
    return (UVendorStock*)res;
}
void UVendorStock::RefreshVendor(FName Vendor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VendorStock.RefreshVendor"));
    struct Params_RefreshVendor {
        FName Vendor; // 0x0
    }; // Size: 0x8
    Params_RefreshVendor params{};
    params.Vendor = (FName)Vendor;
    ProcessEvent(func, &params);
}
void UVendorStock::RefreshAllVendors() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.VendorStock.RefreshAllVendors"));
    struct Params_RefreshAllVendors {
    }; // Size: 0x0
    Params_RefreshAllVendors params{};
    ProcessEvent(func, &params);
}
