#include "FConsoleMacroAnyName.hpp"
#include "FConsoleMacroEntry.hpp"
#include "FConsoleMacroGroupEntry.hpp"
#include "FConsoleMacroShortcutEntryNameRequired.hpp"
#include "FConsoleMacros.hpp"
#include "FConsoleMacrosAutomation.hpp"
#include "FConsoleMacrosAutomationLevel.hpp"
#include "FConsoleMacrosBlockAutomationLevel.hpp"
#include "UConsoleMacrosUserDefinitions.hpp"
#include "UObject.hpp"
UConsoleMacrosUserDefinitions* UConsoleMacrosUserDefinitions::StaticClass() {
    static auto res = find_uobject("Class /Script/ConsoleMacros.ConsoleMacrosUserDefinitions");
    return (UConsoleMacrosUserDefinitions*)res;
}
