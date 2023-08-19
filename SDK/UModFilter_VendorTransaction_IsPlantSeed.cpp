#include "UModFilter_VendorTransaction_Base.hpp"
#include "UModFilter_VendorTransaction_IsPlantSeed.hpp"
UModFilter_VendorTransaction_IsPlantSeed* UModFilter_VendorTransaction_IsPlantSeed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_VendorTransaction_IsPlantSeed");
    return (UModFilter_VendorTransaction_IsPlantSeed*)res;
}
