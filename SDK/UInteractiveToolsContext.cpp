#include "UInputRouter.hpp"
#include "UInteractiveGizmoManager.hpp"
#include "UInteractiveToolManager.hpp"
#include "UInteractiveToolsContext.hpp"
#include "UObject.hpp"
UInteractiveToolsContext* UInteractiveToolsContext::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.InteractiveToolsContext");
    return (UInteractiveToolsContext*)res;
}
