#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FVendorInfo {
    FName VendorID; // 0x0
    FName VendorLocationID; // 0x8
}; // Size: 0x10
#pragma pack(pop)
