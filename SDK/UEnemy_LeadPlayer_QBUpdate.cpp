#include "UEnemy_LeadPlayer_QBUpdate.hpp"
#include "UEnemy_QBUpdate.hpp"
UEnemy_LeadPlayer_QBUpdate* UEnemy_LeadPlayer_QBUpdate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Enemy_LeadPlayer_QBUpdate");
    return (UEnemy_LeadPlayer_QBUpdate*)res;
}
