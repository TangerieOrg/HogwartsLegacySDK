#include "UBTDecorator.hpp"
#include "UBTDecorator_Cooldown.hpp"
UBTDecorator_Cooldown* UBTDecorator_Cooldown::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTDecorator_Cooldown");
    return (UBTDecorator_Cooldown*)res;
}
