#include "ABiped_Character.hpp"
#include "APHX_Biped_Preview_Actor.hpp"
#include "UCustomizableCharacterComponent.hpp"
APHX_Biped_Preview_Actor* APHX_Biped_Preview_Actor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PHX_Biped_Preview_Actor");
    return (APHX_Biped_Preview_Actor*)res;
}
