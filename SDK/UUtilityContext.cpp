#include "AActor.hpp"
#include "UBehaviorTreeComponent.hpp"
#include "UBlackboardComponent.hpp"
#include "UObject.hpp"
#include "UUtilityContext.hpp"
UUtilityContext* UUtilityContext::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.UtilityContext");
    return (UUtilityContext*)res;
}
