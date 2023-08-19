#include "UMODFilter_SocapAmend_Base.hpp"
#include "UModFilter_SocapAmend_IsScholar.hpp"
UModFilter_SocapAmend_IsScholar* UModFilter_SocapAmend_IsScholar::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_SocapAmend_IsScholar");
    return (UModFilter_SocapAmend_IsScholar*)res;
}
