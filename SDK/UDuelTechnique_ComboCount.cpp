#include "UDuelTechnique.hpp"
#include "UDuelTechnique_ComboCount.hpp"
UDuelTechnique_ComboCount* UDuelTechnique_ComboCount::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DuelTechnique_ComboCount");
    return (UDuelTechnique_ComboCount*)res;
}
