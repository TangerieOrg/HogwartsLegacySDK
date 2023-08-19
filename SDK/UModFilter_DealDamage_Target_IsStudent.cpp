#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Target_IsStudent.hpp"
UModFilter_DealDamage_Target_IsStudent* UModFilter_DealDamage_Target_IsStudent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Target_IsStudent");
    return (UModFilter_DealDamage_Target_IsStudent*)res;
}
