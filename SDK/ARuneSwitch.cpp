#include "AActor.hpp"
#include "ARuneSwitch.hpp"
ARuneSwitch* ARuneSwitch::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RuneSwitch");
    return (ARuneSwitch*)res;
}
