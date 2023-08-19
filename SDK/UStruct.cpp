#include "UField.hpp"
#include "UStruct.hpp"
UStruct* UStruct::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.Struct");
    return (UStruct*)res;
}
