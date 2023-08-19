#include "UBTDecorator.hpp"
#include "UBTDecorator_IcarusCanFly.hpp"
UBTDecorator_IcarusCanFly* UBTDecorator_IcarusCanFly::StaticClass() {
    static auto res = find_uobject("Class /Script/IcarusRuntime.BTDecorator_IcarusCanFly");
    return (UBTDecorator_IcarusCanFly*)res;
}
