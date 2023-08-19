#include "UConsoleMacroConsoleDelegate.hpp"
#include "UConsoleMacroConsoleDelegateGroup.hpp"
UConsoleMacroConsoleDelegateGroup* UConsoleMacroConsoleDelegateGroup::StaticClass() {
    static auto res = find_uobject("Class /Script/ConsoleMacros.ConsoleMacroConsoleDelegateGroup");
    return (UConsoleMacroConsoleDelegateGroup*)res;
}
