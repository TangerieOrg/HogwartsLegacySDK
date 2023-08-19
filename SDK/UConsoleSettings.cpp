#include "FAutoCompleteCommand.hpp"
#include "FColor.hpp"
#include "UConsoleSettings.hpp"
#include "UObject.hpp"
UConsoleSettings* UConsoleSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/EngineSettings.ConsoleSettings");
    return (UConsoleSettings*)res;
}
