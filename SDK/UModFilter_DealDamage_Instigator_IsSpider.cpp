#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Instigator_IsSpider.hpp"
UModFilter_DealDamage_Instigator_IsSpider* UModFilter_DealDamage_Instigator_IsSpider::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Instigator_IsSpider");
    return (UModFilter_DealDamage_Instigator_IsSpider*)res;
}
