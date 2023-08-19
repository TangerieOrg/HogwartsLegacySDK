#include "AAble_Character.hpp"
#include "APHX_Able_Preview_Actor_Simple.hpp"
APHX_Able_Preview_Actor_Simple* APHX_Able_Preview_Actor_Simple::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PHX_Able_Preview_Actor_Simple");
    return (APHX_Able_Preview_Actor_Simple*)res;
}
