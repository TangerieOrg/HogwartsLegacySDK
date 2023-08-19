#include "UMODFilter_SocapAmend_Base.hpp"
#include "UModFilter_SocapAmend_IsCost.hpp"
UModFilter_SocapAmend_IsCost* UModFilter_SocapAmend_IsCost::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_SocapAmend_IsCost");
    return (UModFilter_SocapAmend_IsCost*)res;
}
