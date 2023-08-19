#include "UDuelTechnique.hpp"
#include "UDuelTechnique_Reaction.hpp"
UDuelTechnique_Reaction* UDuelTechnique_Reaction::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DuelTechnique_Reaction");
    return (UDuelTechnique_Reaction*)res;
}
