#include "UDuelTechnique.hpp"
#include "UDuelTechnique_Combo.hpp"
UDuelTechnique_Combo* UDuelTechnique_Combo::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DuelTechnique_Combo");
    return (UDuelTechnique_Combo*)res;
}
