#include "UInteractiveToolBuilder.hpp"
#include "UObject.hpp"
UInteractiveToolBuilder* UInteractiveToolBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.InteractiveToolBuilder");
    return (UInteractiveToolBuilder*)res;
}
