#include "UARTraceResultDummy.hpp"
#include "UObject.hpp"
UARTraceResultDummy* UARTraceResultDummy::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARTraceResultDummy");
    return (UARTraceResultDummy*)res;
}
