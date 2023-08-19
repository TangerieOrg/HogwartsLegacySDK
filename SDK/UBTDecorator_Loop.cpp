#include "UBTDecorator.hpp"
#include "UBTDecorator_Loop.hpp"
UBTDecorator_Loop* UBTDecorator_Loop::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTDecorator_Loop");
    return (UBTDecorator_Loop*)res;
}
