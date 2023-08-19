#include "UBTDecorator.hpp"
#include "UBTDecorator_MovementMode.hpp"
UBTDecorator_MovementMode* UBTDecorator_MovementMode::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTDecorator_MovementMode");
    return (UBTDecorator_MovementMode*)res;
}
