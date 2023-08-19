#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Instigator_IsDarkWizard.hpp"
UModFilter_DealDamage_Instigator_IsDarkWizard* UModFilter_DealDamage_Instigator_IsDarkWizard::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Instigator_IsDarkWizard");
    return (UModFilter_DealDamage_Instigator_IsDarkWizard*)res;
}
