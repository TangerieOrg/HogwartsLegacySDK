#include "UInputBehavior.hpp"
#include "UMouseHoverBehavior.hpp"
UMouseHoverBehavior* UMouseHoverBehavior::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.MouseHoverBehavior");
    return (UMouseHoverBehavior*)res;
}
