#include "UDuelTechnique.hpp"
#include "UDuelTechnique_Oppugno.hpp"
UDuelTechnique_Oppugno* UDuelTechnique_Oppugno::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DuelTechnique_Oppugno");
    return (UDuelTechnique_Oppugno*)res;
}
