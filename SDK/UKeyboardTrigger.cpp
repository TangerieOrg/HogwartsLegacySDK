#include "UKeyboardTrigger.hpp"
#include "UObject.hpp"
UKeyboardTrigger* UKeyboardTrigger::StaticClass() {
    static auto res = find_uobject("Class /Script/UtilitiesRuntime.KeyboardTrigger");
    return (UKeyboardTrigger*)res;
}
