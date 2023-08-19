#include "UAmbulatory_AnimInstance.hpp"
#include "UPHX_Able_Preview_AnimInstance.hpp"
UPHX_Able_Preview_AnimInstance* UPHX_Able_Preview_AnimInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PHX_Able_Preview_AnimInstance");
    return (UPHX_Able_Preview_AnimInstance*)res;
}
