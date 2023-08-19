#include "UBTService.hpp"
#include "UBTService_Creature_TestPerchValid.hpp"
UBTService_Creature_TestPerchValid* UBTService_Creature_TestPerchValid::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTService_Creature_TestPerchValid");
    return (UBTService_Creature_TestPerchValid*)res;
}
