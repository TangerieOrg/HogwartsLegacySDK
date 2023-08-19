#include "UMODFilter_SocapAmend_Base.hpp"
#include "UModFilter_SocapAmend_IsCallout.hpp"
UModFilter_SocapAmend_IsCallout* UModFilter_SocapAmend_IsCallout::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_SocapAmend_IsCallout");
    return (UModFilter_SocapAmend_IsCallout*)res;
}
