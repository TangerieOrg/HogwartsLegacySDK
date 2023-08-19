#include "UDuelTechniqueState.hpp"
#include "UObject.hpp"
UDuelTechniqueState* UDuelTechniqueState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DuelTechniqueState");
    return (UDuelTechniqueState*)res;
}
