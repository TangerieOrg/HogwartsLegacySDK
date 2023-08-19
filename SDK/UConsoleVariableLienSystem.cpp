#include "UConsoleVariableLienSystem.hpp"
#include "UObject.hpp"
UConsoleVariableLienSystem* UConsoleVariableLienSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/ConsoleMacros.ConsoleVariableLienSystem");
    return (UConsoleVariableLienSystem*)res;
}
