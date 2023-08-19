#include "UBaseProvider.hpp"
#include "UScriptConditionProvider.hpp"
UScriptConditionProvider* UScriptConditionProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.ScriptConditionProvider");
    return (UScriptConditionProvider*)res;
}
