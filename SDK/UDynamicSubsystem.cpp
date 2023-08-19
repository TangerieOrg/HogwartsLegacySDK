#include "UDynamicSubsystem.hpp"
#include "USubsystem.hpp"
UDynamicSubsystem* UDynamicSubsystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DynamicSubsystem");
    return (UDynamicSubsystem*)res;
}
