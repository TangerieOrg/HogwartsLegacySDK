#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Instigator_IsOnPlayerTeam.hpp"
UModFilter_DealDamage_Instigator_IsOnPlayerTeam* UModFilter_DealDamage_Instigator_IsOnPlayerTeam::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Instigator_IsOnPlayerTeam");
    return (UModFilter_DealDamage_Instigator_IsOnPlayerTeam*)res;
}
