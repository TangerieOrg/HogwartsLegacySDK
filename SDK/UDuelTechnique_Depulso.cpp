#include "UDuelTechnique.hpp"
#include "UDuelTechnique_Depulso.hpp"
UDuelTechnique_Depulso* UDuelTechnique_Depulso::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DuelTechnique_Depulso");
    return (UDuelTechnique_Depulso*)res;
}
