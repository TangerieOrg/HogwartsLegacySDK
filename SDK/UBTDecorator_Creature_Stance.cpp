#include "UBTDecorator.hpp"
#include "UBTDecorator_Creature_Stance.hpp"
UBTDecorator_Creature_Stance* UBTDecorator_Creature_Stance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTDecorator_Creature_Stance");
    return (UBTDecorator_Creature_Stance*)res;
}
