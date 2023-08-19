#include "USubsystem.hpp"
#include "UWorldSubsystem.hpp"
UWorldSubsystem* UWorldSubsystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.WorldSubsystem");
    return (UWorldSubsystem*)res;
}
