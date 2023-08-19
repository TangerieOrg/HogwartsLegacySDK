#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Target_IsEnvironment.hpp"
UModFilter_DealDamage_Target_IsEnvironment* UModFilter_DealDamage_Target_IsEnvironment::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Target_IsEnvironment");
    return (UModFilter_DealDamage_Target_IsEnvironment*)res;
}
