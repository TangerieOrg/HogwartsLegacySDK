#include "UModFilter.hpp"
#include "UModFilter_VendorTransaction_Base.hpp"
UModFilter_VendorTransaction_Base* UModFilter_VendorTransaction_Base::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_VendorTransaction_Base");
    return (UModFilter_VendorTransaction_Base*)res;
}
