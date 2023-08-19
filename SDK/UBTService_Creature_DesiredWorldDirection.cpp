#include "UBTService.hpp"
#include "UBTService_Creature_DesiredWorldDirection.hpp"
UBTService_Creature_DesiredWorldDirection* UBTService_Creature_DesiredWorldDirection::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTService_Creature_DesiredWorldDirection");
    return (UBTService_Creature_DesiredWorldDirection*)res;
}
