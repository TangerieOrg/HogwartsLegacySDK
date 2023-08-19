#include "UField.hpp"
#include "UObject.hpp"
UField* UField::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.Field");
    return (UField*)res;
}
