#include "UInputBehavior.hpp"
#include "UKeyAsModifierInputBehavior.hpp"
UKeyAsModifierInputBehavior* UKeyAsModifierInputBehavior::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.KeyAsModifierInputBehavior");
    return (UKeyAsModifierInputBehavior*)res;
}
