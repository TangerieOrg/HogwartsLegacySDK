#include "UBTService.hpp"
#include "UBTService_Creature_DisableShutdown.hpp"
UBTService_Creature_DisableShutdown* UBTService_Creature_DisableShutdown::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTService_Creature_DisableShutdown");
    return (UBTService_Creature_DisableShutdown*)res;
}
