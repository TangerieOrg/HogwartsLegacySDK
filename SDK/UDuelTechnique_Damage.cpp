#include "UDuelTechnique.hpp"
#include "UDuelTechnique_Damage.hpp"
UDuelTechnique_Damage* UDuelTechnique_Damage::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DuelTechnique_Damage");
    return (UDuelTechnique_Damage*)res;
}
