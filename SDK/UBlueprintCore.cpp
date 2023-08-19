#include "FGuid.hpp"
#include "UBlueprintCore.hpp"
#include "UClass.hpp"
#include "UObject.hpp"
UBlueprintCore* UBlueprintCore::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.BlueprintCore");
    return (UBlueprintCore*)res;
}
