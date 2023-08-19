#include "UClickDragInputBehavior.hpp"
#include "ULocalClickDragInputBehavior.hpp"
ULocalClickDragInputBehavior* ULocalClickDragInputBehavior::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.LocalClickDragInputBehavior");
    return (ULocalClickDragInputBehavior*)res;
}
