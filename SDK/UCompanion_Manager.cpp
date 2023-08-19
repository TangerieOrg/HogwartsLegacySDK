#include "UCompanion_Manager.hpp"
#include "UEnemy_Manager.hpp"
UCompanion_Manager* UCompanion_Manager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Companion_Manager");
    return (UCompanion_Manager*)res;
}
