#include "UAnyButtonInputBehavior.hpp"
#include "UInputBehavior.hpp"
UAnyButtonInputBehavior* UAnyButtonInputBehavior::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.AnyButtonInputBehavior");
    return (UAnyButtonInputBehavior*)res;
}
