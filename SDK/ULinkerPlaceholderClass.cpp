#include "UClass.hpp"
#include "ULinkerPlaceholderClass.hpp"
ULinkerPlaceholderClass* ULinkerPlaceholderClass::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.LinkerPlaceholderClass");
    return (ULinkerPlaceholderClass*)res;
}
