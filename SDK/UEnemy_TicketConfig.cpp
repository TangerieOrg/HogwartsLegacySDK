#include "UEnemy_TicketConfig.hpp"
#include "UObject.hpp"
UEnemy_TicketConfig* UEnemy_TicketConfig::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_TicketConfig");
    return (UEnemy_TicketConfig*)res;
}
