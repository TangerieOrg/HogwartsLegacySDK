#include "AActor.hpp"
#include "ASimpleBreakable.hpp"
#include "UObjectStateComponent.hpp"
ASimpleBreakable* ASimpleBreakable::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SimpleBreakable");
    return (ASimpleBreakable*)res;
}
