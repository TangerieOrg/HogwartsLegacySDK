#include "UBTDecorator.hpp"
#include "UBTDecorator_Creature_Gait.hpp"
UBTDecorator_Creature_Gait* UBTDecorator_Creature_Gait::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTDecorator_Creature_Gait");
    return (UBTDecorator_Creature_Gait*)res;
}
