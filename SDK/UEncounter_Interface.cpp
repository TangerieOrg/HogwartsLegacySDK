#include "UEncounter_Interface.hpp"
#include "UInterface.hpp"
UEncounter_Interface* UEncounter_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Encounter_Interface");
    return (UEncounter_Interface*)res;
}
