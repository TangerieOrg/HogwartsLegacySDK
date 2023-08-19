#include "UScreen.hpp"
#include "USpellSlotAssignScreen.hpp"
USpellSlotAssignScreen* USpellSlotAssignScreen::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpellSlotAssignScreen");
    return (USpellSlotAssignScreen*)res;
}
