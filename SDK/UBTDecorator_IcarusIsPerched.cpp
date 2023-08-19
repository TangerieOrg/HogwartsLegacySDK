#include "UBTDecorator.hpp"
#include "UBTDecorator_IcarusIsPerched.hpp"
UBTDecorator_IcarusIsPerched* UBTDecorator_IcarusIsPerched::StaticClass() {
    static auto res = find_uobject("Class /Script/IcarusRuntime.BTDecorator_IcarusIsPerched");
    return (UBTDecorator_IcarusIsPerched*)res;
}
