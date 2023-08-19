#include "FBehaviorInfo.hpp"
#include "UInputBehaviorSet.hpp"
#include "UObject.hpp"
UInputBehaviorSet* UInputBehaviorSet::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.InputBehaviorSet");
    return (UInputBehaviorSet*)res;
}
