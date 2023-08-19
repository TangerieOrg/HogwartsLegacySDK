#include "UMODFilter_SocapAmend_Base.hpp"
#include "UModFilter_SocapAmend_IsProfessor.hpp"
UModFilter_SocapAmend_IsProfessor* UModFilter_SocapAmend_IsProfessor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_SocapAmend_IsProfessor");
    return (UModFilter_SocapAmend_IsProfessor*)res;
}
