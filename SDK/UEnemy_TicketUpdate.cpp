#include "UEnemy_QBUpdate.hpp"
#include "UEnemy_TicketUpdate.hpp"
UEnemy_TicketUpdate* UEnemy_TicketUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_TicketUpdate");
    return (UEnemy_TicketUpdate*)res;
}
