#include "UModFilter.hpp"
#include "UModFilter_LootDrop_Base.hpp"
UModFilter_LootDrop_Base* UModFilter_LootDrop_Base::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_LootDrop_Base");
    return (UModFilter_LootDrop_Base*)res;
}
