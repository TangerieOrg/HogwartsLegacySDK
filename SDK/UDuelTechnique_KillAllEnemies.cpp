#include "UDuelTechnique.hpp"
#include "UDuelTechnique_KillAllEnemies.hpp"
UDuelTechnique_KillAllEnemies* UDuelTechnique_KillAllEnemies::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DuelTechnique_KillAllEnemies");
    return (UDuelTechnique_KillAllEnemies*)res;
}
