#include "UDuel_Manager.hpp"
#include "UEnemy_Manager.hpp"
UDuel_Manager* UDuel_Manager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Duel_Manager");
    return (UDuel_Manager*)res;
}
