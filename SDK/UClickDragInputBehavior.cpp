#include "UAnyButtonInputBehavior.hpp"
#include "UClickDragInputBehavior.hpp"
UClickDragInputBehavior* UClickDragInputBehavior::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.ClickDragInputBehavior");
    return (UClickDragInputBehavior*)res;
}
