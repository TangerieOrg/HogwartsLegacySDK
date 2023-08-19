#include "FConsoleVariableLienEntry.hpp"
#include "UConsoleVariableLienAsset.hpp"
#include "UDataAsset.hpp"
UConsoleVariableLienAsset* UConsoleVariableLienAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/ConsoleMacros.ConsoleVariableLienAsset");
    return (UConsoleVariableLienAsset*)res;
}
