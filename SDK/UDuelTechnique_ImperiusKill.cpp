#include "UDuelTechnique.hpp"
#include "UDuelTechnique_ImperiusKill.hpp"
UDuelTechnique_ImperiusKill* UDuelTechnique_ImperiusKill::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DuelTechnique_ImperiusKill");
    return (UDuelTechnique_ImperiusKill*)res;
}
