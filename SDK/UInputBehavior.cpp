#include "UInputBehavior.hpp"
#include "UObject.hpp"
UInputBehavior* UInputBehavior::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.InputBehavior");
    return (UInputBehavior*)res;
}
