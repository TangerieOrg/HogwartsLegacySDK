#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Target_IsImperiousControlled.hpp"
UModFilter_DealDamage_Target_IsImperiousControlled* UModFilter_DealDamage_Target_IsImperiousControlled::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Target_IsImperiousControlled");
    return (UModFilter_DealDamage_Target_IsImperiousControlled*)res;
}
