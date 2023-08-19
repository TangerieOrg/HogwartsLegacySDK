#include "UMODFilter_SocapAmend_Base.hpp"
#include "UModFilter_SocapAmend_IsFavor.hpp"
UModFilter_SocapAmend_IsFavor* UModFilter_SocapAmend_IsFavor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_SocapAmend_IsFavor");
    return (UModFilter_SocapAmend_IsFavor*)res;
}
