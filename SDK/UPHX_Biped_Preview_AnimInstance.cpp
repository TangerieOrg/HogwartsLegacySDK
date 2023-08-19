#include "UBiped_AnimInstance.hpp"
#include "UPHX_Biped_Preview_AnimInstance.hpp"
UPHX_Biped_Preview_AnimInstance* UPHX_Biped_Preview_AnimInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PHX_Biped_Preview_AnimInstance");
    return (UPHX_Biped_Preview_AnimInstance*)res;
}
