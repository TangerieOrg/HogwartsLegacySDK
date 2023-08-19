#include "UObject.hpp"
#include "USubsystem.hpp"
USubsystem* USubsystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Subsystem");
    return (USubsystem*)res;
}
