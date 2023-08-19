#include "UConsoleMacroConsoleDelegate.hpp"
#include "UObject.hpp"
UConsoleMacroConsoleDelegate* UConsoleMacroConsoleDelegate::StaticClass() {
    static auto res = find_uobject("Class /Script/ConsoleMacros.ConsoleMacroConsoleDelegate");
    return (UConsoleMacroConsoleDelegate*)res;
}
