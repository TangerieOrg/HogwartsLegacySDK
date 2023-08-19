#include "UDead_Manager.hpp"
#include "UNPC_Manager.hpp"
UDead_Manager* UDead_Manager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Dead_Manager");
    return (UDead_Manager*)res;
}
