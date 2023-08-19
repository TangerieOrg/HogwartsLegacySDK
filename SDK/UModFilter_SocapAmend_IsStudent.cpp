#include "UMODFilter_SocapAmend_Base.hpp"
#include "UModFilter_SocapAmend_IsStudent.hpp"
UModFilter_SocapAmend_IsStudent* UModFilter_SocapAmend_IsStudent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_SocapAmend_IsStudent");
    return (UModFilter_SocapAmend_IsStudent*)res;
}
