#include "UDuelTechnique.hpp"
#include "UDuelTechnique_CustomEvent.hpp"
UDuelTechnique_CustomEvent* UDuelTechnique_CustomEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DuelTechnique_CustomEvent");
    return (UDuelTechnique_CustomEvent*)res;
}
