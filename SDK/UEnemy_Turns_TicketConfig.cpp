#include "UDataTable.hpp"
#include "UEnemy_TicketConfig.hpp"
#include "UEnemy_Turns_TicketConfig.hpp"
UEnemy_Turns_TicketConfig* UEnemy_Turns_TicketConfig::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Turns_TicketConfig");
    return (UEnemy_Turns_TicketConfig*)res;
}
