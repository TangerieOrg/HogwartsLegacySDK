#include "UEnemy_LeadPlayer_QBUpdateData.hpp"
#include "UEnemy_QBUpdateData.hpp"
UEnemy_LeadPlayer_QBUpdateData* UEnemy_LeadPlayer_QBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_LeadPlayer_QBUpdateData");
    return (UEnemy_LeadPlayer_QBUpdateData*)res;
}
