#include "UBTDecorator.hpp"
#include "UBTDecorator_ForceSuccess.hpp"
UBTDecorator_ForceSuccess* UBTDecorator_ForceSuccess::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTDecorator_ForceSuccess");
    return (UBTDecorator_ForceSuccess*)res;
}
