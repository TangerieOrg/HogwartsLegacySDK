#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UVendorStock : public UObject {
public:
    char pad_28[0x20];
    static UVendorStock* StaticClass();
    void RefreshVendor(FName Vendor);
    void RefreshAllVendors();
}; // Size: 0x48
#pragma pack(pop)
