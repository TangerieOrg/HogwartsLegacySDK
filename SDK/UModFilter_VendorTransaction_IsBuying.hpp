#pragma once
#include <cstdint>
#include "UModFilter_VendorTransaction_Base.hpp"
#pragma pack(push, 1)
class UModFilter_VendorTransaction_IsBuying : public UModFilter_VendorTransaction_Base {
public:
    static UModFilter_VendorTransaction_IsBuying* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
