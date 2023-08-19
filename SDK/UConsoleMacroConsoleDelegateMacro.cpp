#include "UConsoleMacroConsoleDelegate.hpp"
#include "UConsoleMacroConsoleDelegateMacro.hpp"
UConsoleMacroConsoleDelegateMacro* UConsoleMacroConsoleDelegateMacro::StaticClass() {
    static auto res = find_uobject("Class /Script/ConsoleMacros.ConsoleMacroConsoleDelegateMacro");
    return (UConsoleMacroConsoleDelegateMacro*)res;
}
