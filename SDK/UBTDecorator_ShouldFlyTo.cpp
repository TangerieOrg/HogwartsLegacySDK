#include "FBlackboardKeySelector.hpp"
#include "UBTDecorator.hpp"
#include "UBTDecorator_ShouldFlyTo.hpp"
UBTDecorator_ShouldFlyTo* UBTDecorator_ShouldFlyTo::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTDecorator_ShouldFlyTo");
    return (UBTDecorator_ShouldFlyTo*)res;
}
