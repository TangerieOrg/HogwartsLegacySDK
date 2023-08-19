#include "UEnemy_InstanceQBUpdateData.hpp"
#include "UEnemy_LeadPlayer_InstanceQBUpdateData.hpp"
UEnemy_LeadPlayer_InstanceQBUpdateData* UEnemy_LeadPlayer_InstanceQBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_LeadPlayer_InstanceQBUpdateData");
    return (UEnemy_LeadPlayer_InstanceQBUpdateData*)res;
}
