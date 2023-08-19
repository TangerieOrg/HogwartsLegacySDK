#include "UActorComponent.hpp"
#include "UToolType.hpp"
UToolType* UToolType::StaticClass() {
    static auto res = find_uobject("Class /Script/Toolset.ToolType");
    return (UToolType*)res;
}
