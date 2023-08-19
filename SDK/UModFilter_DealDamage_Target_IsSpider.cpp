#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Target_IsSpider.hpp"
UModFilter_DealDamage_Target_IsSpider* UModFilter_DealDamage_Target_IsSpider::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Target_IsSpider");
    return (UModFilter_DealDamage_Target_IsSpider*)res;
}
