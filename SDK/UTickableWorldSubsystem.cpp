#include "UTickableWorldSubsystem.hpp"
#include "UWorldSubsystem.hpp"
UTickableWorldSubsystem* UTickableWorldSubsystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.TickableWorldSubsystem");
    return (UTickableWorldSubsystem*)res;
}
