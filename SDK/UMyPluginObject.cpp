#include "FMyPluginStruct.hpp"
#include "UMyPluginObject.hpp"
#include "UObject.hpp"
UMyPluginObject* UMyPluginObject::StaticClass() {
    static auto res = find_uobject("Class /Script/UObjectPlugin.MyPluginObject");
    return (UMyPluginObject*)res;
}
