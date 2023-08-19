#include "UCurveFloat.hpp"
#include "UEnemy_QBUpdateData.hpp"
#include "UEnemy_Turns_TicketUpdate_QBUpdateData.hpp"
UEnemy_Turns_TicketUpdate_QBUpdateData* UEnemy_Turns_TicketUpdate_QBUpdateData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Turns_TicketUpdate_QBUpdateData");
    return (UEnemy_Turns_TicketUpdate_QBUpdateData*)res;
}
