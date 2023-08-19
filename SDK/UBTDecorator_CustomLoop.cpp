#include "UBTDCustomLoopCount.hpp"
#include "UBTDecorator.hpp"
#include "UBTDecorator_CustomLoop.hpp"
UBTDecorator_CustomLoop* UBTDecorator_CustomLoop::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTDecorator_CustomLoop");
    return (UBTDecorator_CustomLoop*)res;
}
