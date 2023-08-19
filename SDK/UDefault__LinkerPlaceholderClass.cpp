#include "UDefault__LinkerPlaceholderClass.hpp"
UDefault__LinkerPlaceholderClass* UDefault__LinkerPlaceholderClass::StaticClass() {
    static auto res = find_uobject("LinkerPlaceholderClass /Script/CoreUObject.Default__LinkerPlaceholderClass");
    return (UDefault__LinkerPlaceholderClass*)res;
}
