#include "UBTDecorator.hpp"
#include "UBTDecorator_Creature_CanHerd.hpp"
UBTDecorator_Creature_CanHerd* UBTDecorator_Creature_CanHerd::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTDecorator_Creature_CanHerd");
    return (UBTDecorator_Creature_CanHerd*)res;
}
