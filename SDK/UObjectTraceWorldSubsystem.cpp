#include "UObjectTraceWorldSubsystem.hpp"
#include "UWorldSubsystem.hpp"
UObjectTraceWorldSubsystem* UObjectTraceWorldSubsystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ObjectTraceWorldSubsystem");
    return (UObjectTraceWorldSubsystem*)res;
}
