#include "UBTService.hpp"
#include "UBTService_Creature_IdleBreaks.hpp"
UBTService_Creature_IdleBreaks* UBTService_Creature_IdleBreaks::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTService_Creature_IdleBreaks");
    return (UBTService_Creature_IdleBreaks*)res;
}
