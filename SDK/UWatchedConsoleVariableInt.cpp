#include "UWatchedConsoleVariable.hpp"
#include "UWatchedConsoleVariableInt.hpp"
UWatchedConsoleVariableInt* UWatchedConsoleVariableInt::StaticClass() {
    static auto res = find_uobject("Class /Script/ConsoleMacros.WatchedConsoleVariableInt");
    return (UWatchedConsoleVariableInt*)res;
}
