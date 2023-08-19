#include "FBPComponentClassOverride.hpp"
#include "UActorComponent.hpp"
#include "UBlueprintGeneratedClass.hpp"
#include "UClass.hpp"
#include "UDynamicBlueprintBinding.hpp"
#include "UFunction.hpp"
#include "UInheritableComponentHandler.hpp"
#include "USimpleConstructionScript.hpp"
#include "UStructProperty.hpp"
#include "UTimelineTemplate.hpp"
UBlueprintGeneratedClass* UBlueprintGeneratedClass::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.BlueprintGeneratedClass");
    return (UBlueprintGeneratedClass*)res;
}
