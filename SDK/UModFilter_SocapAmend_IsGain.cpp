#include "UMODFilter_SocapAmend_Base.hpp"
#include "UModFilter_SocapAmend_IsGain.hpp"
UModFilter_SocapAmend_IsGain* UModFilter_SocapAmend_IsGain::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_SocapAmend_IsGain");
    return (UModFilter_SocapAmend_IsGain*)res;
}
