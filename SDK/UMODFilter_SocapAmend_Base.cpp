#include "UMODFilter_SocapAmend_Base.hpp"
#include "UModFilter.hpp"
UMODFilter_SocapAmend_Base* UMODFilter_SocapAmend_Base::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MODFilter_SocapAmend_Base");
    return (UMODFilter_SocapAmend_Base*)res;
}
