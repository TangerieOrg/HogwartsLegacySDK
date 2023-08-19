#include "UAutomationEnvironment.hpp"
#include "UObject.hpp"
UAutomationEnvironment* UAutomationEnvironment::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AutomationEnvironment");
    return (UAutomationEnvironment*)res;
}
