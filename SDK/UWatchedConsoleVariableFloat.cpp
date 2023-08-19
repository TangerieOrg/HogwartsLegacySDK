#include "UWatchedConsoleVariable.hpp"
#include "UWatchedConsoleVariableFloat.hpp"
UWatchedConsoleVariableFloat* UWatchedConsoleVariableFloat::StaticClass() {
    static auto res = find_uobject("Class /Script/ConsoleMacros.WatchedConsoleVariableFloat");
    return (UWatchedConsoleVariableFloat*)res;
}
