#include "UImportantToggleSettingInterface.hpp"
#include "UInterface.hpp"
UImportantToggleSettingInterface* UImportantToggleSettingInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ImportantToggleSettingInterface");
    return (UImportantToggleSettingInterface*)res;
}
