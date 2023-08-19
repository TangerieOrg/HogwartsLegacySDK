#include "UInputBehaviorSet.hpp"
#include "UInputRouter.hpp"
#include "UObject.hpp"
UInputRouter* UInputRouter::StaticClass() {
    static auto res = find_uobject("Class /Script/InteractiveToolsFramework.InputRouter");
    return (UInputRouter*)res;
}
