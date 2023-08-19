#include "UMODFilter_SocapAmend_Base.hpp"
#include "UModFilter_SocapAmend_IsHerbologist.hpp"
UModFilter_SocapAmend_IsHerbologist* UModFilter_SocapAmend_IsHerbologist::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_SocapAmend_IsHerbologist");
    return (UModFilter_SocapAmend_IsHerbologist*)res;
}
