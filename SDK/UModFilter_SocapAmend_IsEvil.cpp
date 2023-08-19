#include "UMODFilter_SocapAmend_Base.hpp"
#include "UModFilter_SocapAmend_IsEvil.hpp"
UModFilter_SocapAmend_IsEvil* UModFilter_SocapAmend_IsEvil::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_SocapAmend_IsEvil");
    return (UModFilter_SocapAmend_IsEvil*)res;
}
