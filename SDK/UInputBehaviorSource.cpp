#include "UInputBehaviorSource.hpp"
#include "UInterface.hpp"
UInputBehaviorSource* UInputBehaviorSource::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.InputBehaviorSource");
    return (UInputBehaviorSource*)res;
}
