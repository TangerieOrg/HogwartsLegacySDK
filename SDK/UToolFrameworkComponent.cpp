#include "UInterface.hpp"
#include "UToolFrameworkComponent.hpp"
UToolFrameworkComponent* UToolFrameworkComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.ToolFrameworkComponent");
    return (UToolFrameworkComponent*)res;
}
