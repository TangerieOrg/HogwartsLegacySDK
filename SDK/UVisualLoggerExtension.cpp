#include "UObject.hpp"
#include "UVisualLoggerExtension.hpp"
UVisualLoggerExtension* UVisualLoggerExtension::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.VisualLoggerExtension");
    return (UVisualLoggerExtension*)res;
}
