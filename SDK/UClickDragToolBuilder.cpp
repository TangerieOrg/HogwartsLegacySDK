#include "UClickDragToolBuilder.hpp"
#include "UInteractiveToolBuilder.hpp"
UClickDragToolBuilder* UClickDragToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.ClickDragToolBuilder");
    return (UClickDragToolBuilder*)res;
}
