#include "UObject.hpp"
#include "UVisualLoggerAutomationTests.hpp"
UVisualLoggerAutomationTests* UVisualLoggerAutomationTests::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.VisualLoggerAutomationTests");
    return (UVisualLoggerAutomationTests*)res;
}
