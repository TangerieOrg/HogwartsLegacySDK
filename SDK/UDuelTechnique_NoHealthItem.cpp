#include "UDuelTechnique.hpp"
#include "UDuelTechnique_NoHealthItem.hpp"
UDuelTechnique_NoHealthItem* UDuelTechnique_NoHealthItem::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DuelTechnique_NoHealthItem");
    return (UDuelTechnique_NoHealthItem*)res;
}
