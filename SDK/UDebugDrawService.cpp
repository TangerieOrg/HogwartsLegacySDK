#include "UBlueprintFunctionLibrary.hpp"
#include "UDebugDrawService.hpp"
UDebugDrawService* UDebugDrawService::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DebugDrawService");
    return (UDebugDrawService*)res;
}
