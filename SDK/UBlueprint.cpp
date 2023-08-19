#include "EBlueprintType.hpp"
#include "FBPComponentClassOverride.hpp"
#include "UActorComponent.hpp"
#include "UBlueprint.hpp"
#include "UBlueprintCore.hpp"
#include "UClass.hpp"
#include "UInheritableComponentHandler.hpp"
#include "USimpleConstructionScript.hpp"
#include "UTimelineTemplate.hpp"
UBlueprint* UBlueprint::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Blueprint");
    return (UBlueprint*)res;
}
