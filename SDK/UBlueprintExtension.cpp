#include "UBlueprintExtension.hpp"
#include "UObject.hpp"
UBlueprintExtension* UBlueprintExtension::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.BlueprintExtension");
    return (UBlueprintExtension*)res;
}
