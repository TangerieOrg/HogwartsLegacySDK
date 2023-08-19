#include "UFunction.hpp"
#include "ULinkerPlaceholderFunction.hpp"
ULinkerPlaceholderFunction* ULinkerPlaceholderFunction::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.LinkerPlaceholderFunction");
    return (ULinkerPlaceholderFunction*)res;
}
