#include "UBTDecorator.hpp"
#include "UBTDecorator_TimeLimit.hpp"
UBTDecorator_TimeLimit* UBTDecorator_TimeLimit::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTDecorator_TimeLimit");
    return (UBTDecorator_TimeLimit*)res;
}
