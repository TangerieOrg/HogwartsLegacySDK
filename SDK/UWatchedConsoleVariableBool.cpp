#include "UWatchedConsoleVariable.hpp"
#include "UWatchedConsoleVariableBool.hpp"
UWatchedConsoleVariableBool* UWatchedConsoleVariableBool::StaticClass() {
    static auto res = find_uobject("Class /Script/ConsoleMacros.WatchedConsoleVariableBool");
    return (UWatchedConsoleVariableBool*)res;
}
