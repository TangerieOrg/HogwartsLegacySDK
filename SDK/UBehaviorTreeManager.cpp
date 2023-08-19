#include "FBehaviorTreeTemplateInfo.hpp"
#include "UBehaviorTreeComponent.hpp"
#include "UBehaviorTreeManager.hpp"
#include "UObject.hpp"
UBehaviorTreeManager* UBehaviorTreeManager::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BehaviorTreeManager");
    return (UBehaviorTreeManager*)res;
}
