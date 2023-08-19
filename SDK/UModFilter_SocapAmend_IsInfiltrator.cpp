#include "UMODFilter_SocapAmend_Base.hpp"
#include "UModFilter_SocapAmend_IsInfiltrator.hpp"
UModFilter_SocapAmend_IsInfiltrator* UModFilter_SocapAmend_IsInfiltrator::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_SocapAmend_IsInfiltrator");
    return (UModFilter_SocapAmend_IsInfiltrator*)res;
}
