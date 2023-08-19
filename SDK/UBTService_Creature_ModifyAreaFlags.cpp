#include "FOdcFlags.hpp"
#include "UBTService.hpp"
#include "UBTService_Creature_ModifyAreaFlags.hpp"
UBTService_Creature_ModifyAreaFlags* UBTService_Creature_ModifyAreaFlags::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTService_Creature_ModifyAreaFlags");
    return (UBTService_Creature_ModifyAreaFlags*)res;
}
