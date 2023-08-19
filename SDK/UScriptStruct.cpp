#include "UScriptStruct.hpp"
#include "UStruct.hpp"
UScriptStruct* UScriptStruct::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.ScriptStruct");
    return (UScriptStruct*)res;
}
