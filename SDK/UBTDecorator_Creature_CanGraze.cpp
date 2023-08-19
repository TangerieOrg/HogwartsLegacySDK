#include "UBTDecorator.hpp"
#include "UBTDecorator_Creature_CanGraze.hpp"
UBTDecorator_Creature_CanGraze* UBTDecorator_Creature_CanGraze::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTDecorator_Creature_CanGraze");
    return (UBTDecorator_Creature_CanGraze*)res;
}
