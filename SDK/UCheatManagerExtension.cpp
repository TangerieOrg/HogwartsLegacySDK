#include "UCheatManagerExtension.hpp"
#include "UObject.hpp"
UCheatManagerExtension* UCheatManagerExtension::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CheatManagerExtension");
    return (UCheatManagerExtension*)res;
}
