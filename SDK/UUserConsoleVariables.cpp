#include "FUserConsoleVariableBool.hpp"
#include "FUserConsoleVariableFloat.hpp"
#include "FUserConsoleVariableInt.hpp"
#include "UDataAsset.hpp"
#include "UUserConsoleVariables.hpp"
UUserConsoleVariables* UUserConsoleVariables::StaticClass() {
    static auto res = find_uobject("Class /Script/ConsoleMacros.UserConsoleVariables");
    return (UUserConsoleVariables*)res;
}
