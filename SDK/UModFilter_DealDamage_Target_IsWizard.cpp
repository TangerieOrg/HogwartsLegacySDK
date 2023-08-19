#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Target_IsWizard.hpp"
UModFilter_DealDamage_Target_IsWizard* UModFilter_DealDamage_Target_IsWizard::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Target_IsWizard");
    return (UModFilter_DealDamage_Target_IsWizard*)res;
}
