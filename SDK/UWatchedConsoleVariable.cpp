#include "UObject.hpp"
#include "UWatchedConsoleVariable.hpp"
UWatchedConsoleVariable* UWatchedConsoleVariable::StaticClass() {
    static auto res = find_uobject("Class /Script/ConsoleMacros.WatchedConsoleVariable");
    return (UWatchedConsoleVariable*)res;
}
