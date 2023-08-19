#include "UBlueprintFunctionLibrary.hpp"
#include "UObject.hpp"
UBlueprintFunctionLibrary* UBlueprintFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.BlueprintFunctionLibrary");
    return (UBlueprintFunctionLibrary*)res;
}
