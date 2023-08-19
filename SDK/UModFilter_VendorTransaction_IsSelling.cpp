#include "UModFilter_VendorTransaction_Base.hpp"
#include "UModFilter_VendorTransaction_IsSelling.hpp"
UModFilter_VendorTransaction_IsSelling* UModFilter_VendorTransaction_IsSelling::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_VendorTransaction_IsSelling");
    return (UModFilter_VendorTransaction_IsSelling*)res;
}
