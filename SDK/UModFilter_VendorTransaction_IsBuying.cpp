#include "UModFilter_VendorTransaction_Base.hpp"
#include "UModFilter_VendorTransaction_IsBuying.hpp"
UModFilter_VendorTransaction_IsBuying* UModFilter_VendorTransaction_IsBuying::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_VendorTransaction_IsBuying");
    return (UModFilter_VendorTransaction_IsBuying*)res;
}
