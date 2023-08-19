#include "UEnemy_TicketUpdate.hpp"
#include "UEnemy_Turns_TicketUpdate.hpp"
UEnemy_Turns_TicketUpdate* UEnemy_Turns_TicketUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_Turns_TicketUpdate");
    return (UEnemy_Turns_TicketUpdate*)res;
}
