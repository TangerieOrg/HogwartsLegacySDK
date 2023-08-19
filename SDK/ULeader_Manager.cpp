#include "UEnemy_Manager.hpp"
#include "ULeader_Manager.hpp"
ULeader_Manager* ULeader_Manager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Leader_Manager");
    return (ULeader_Manager*)res;
}
