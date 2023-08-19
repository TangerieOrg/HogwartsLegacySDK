#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Target_IsCharacter.hpp"
UModFilter_DealDamage_Target_IsCharacter* UModFilter_DealDamage_Target_IsCharacter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Target_IsCharacter");
    return (UModFilter_DealDamage_Target_IsCharacter*)res;
}
