#include "UMODFilter_SocapAmend_Base.hpp"
#include "UModFilter_SocapAmend_AreInSameHouse.hpp"
UModFilter_SocapAmend_AreInSameHouse* UModFilter_SocapAmend_AreInSameHouse::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_SocapAmend_AreInSameHouse");
    return (UModFilter_SocapAmend_AreInSameHouse*)res;
}
