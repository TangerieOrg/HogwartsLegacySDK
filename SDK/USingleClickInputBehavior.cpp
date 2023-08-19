#include "UAnyButtonInputBehavior.hpp"
#include "USingleClickInputBehavior.hpp"
USingleClickInputBehavior* USingleClickInputBehavior::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.SingleClickInputBehavior");
    return (USingleClickInputBehavior*)res;
}
