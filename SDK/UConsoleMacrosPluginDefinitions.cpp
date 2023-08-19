#include "FConsoleMacroEntry.hpp"
#include "FConsoleMacroGroupEntry.hpp"
#include "FConsoleMacroShortcutEntryNameRequired.hpp"
#include "UConsoleMacrosPluginDefinitions.hpp"
#include "UObject.hpp"
UConsoleMacrosPluginDefinitions* UConsoleMacrosPluginDefinitions::StaticClass() {
    static auto res = find_uobject("Class /Script/ConsoleMacros.ConsoleMacrosPluginDefinitions");
    return (UConsoleMacrosPluginDefinitions*)res;
}
