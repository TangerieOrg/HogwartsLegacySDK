#include "UBTService.hpp"
#include "UBTService_Creature_ReservePerch.hpp"
UBTService_Creature_ReservePerch* UBTService_Creature_ReservePerch::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTService_Creature_ReservePerch");
    return (UBTService_Creature_ReservePerch*)res;
}
