#include "UBTDecorator.hpp"
#include "UBTDecorator_IcarusIsFlying.hpp"
UBTDecorator_IcarusIsFlying* UBTDecorator_IcarusIsFlying::StaticClass() {
    static auto res = find_uobject("Class /Script/IcarusRuntime.BTDecorator_IcarusIsFlying");
    return (UBTDecorator_IcarusIsFlying*)res;
}
