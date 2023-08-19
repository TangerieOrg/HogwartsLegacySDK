#include "UModFilter_LootDrop_Base.hpp"
#include "UModFilter_LootDrop_Enemy.hpp"
UModFilter_LootDrop_Enemy* UModFilter_LootDrop_Enemy::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_LootDrop_Enemy");
    return (UModFilter_LootDrop_Enemy*)res;
}
