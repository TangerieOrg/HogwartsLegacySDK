#include "ULocalPlayerSubsystem.hpp"
#include "USubsystem.hpp"
ULocalPlayerSubsystem* ULocalPlayerSubsystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LocalPlayerSubsystem");
    return (ULocalPlayerSubsystem*)res;
}
