#include "UMODFilter_SocapAmend_Base.hpp"
#include "UModFilter_SocapAmend_IsMagizoologist.hpp"
UModFilter_SocapAmend_IsMagizoologist* UModFilter_SocapAmend_IsMagizoologist::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_SocapAmend_IsMagizoologist");
    return (UModFilter_SocapAmend_IsMagizoologist*)res;
}
