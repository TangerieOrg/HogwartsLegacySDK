#include "UDynamicSplinesSubsystem.hpp"
#include "UWorldSubsystem.hpp"
UDynamicSplinesSubsystem* UDynamicSplinesSubsystem::StaticClass() {
    static auto res = find_uobject("Class /Script/DynamicSplinesRuntime.DynamicSplinesSubsystem");
    return (UDynamicSplinesSubsystem*)res;
}
