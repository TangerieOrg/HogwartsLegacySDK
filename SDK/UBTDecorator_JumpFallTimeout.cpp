#include "UBTDecorator.hpp"
#include "UBTDecorator_JumpFallTimeout.hpp"
UBTDecorator_JumpFallTimeout* UBTDecorator_JumpFallTimeout::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.BTDecorator_JumpFallTimeout");
    return (UBTDecorator_JumpFallTimeout*)res;
}
