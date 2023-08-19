#include "UConsoleMacroConsoleDelegate.hpp"
#include "UConsoleMacroConsoleDelegateShortcut.hpp"
UConsoleMacroConsoleDelegateShortcut* UConsoleMacroConsoleDelegateShortcut::StaticClass() {
    static auto res = find_uobject("Class /Script/ConsoleMacros.ConsoleMacroConsoleDelegateShortcut");
    return (UConsoleMacroConsoleDelegateShortcut*)res;
}
