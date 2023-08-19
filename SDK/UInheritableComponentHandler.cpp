#include "FComponentOverrideRecord.hpp"
#include "UActorComponent.hpp"
#include "UInheritableComponentHandler.hpp"
#include "UObject.hpp"
UInheritableComponentHandler* UInheritableComponentHandler::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InheritableComponentHandler");
    return (UInheritableComponentHandler*)res;
}
