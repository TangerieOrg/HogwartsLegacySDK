#include "UEnum.hpp"
#include "UField.hpp"
UEnum* UEnum::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.Enum");
    return (UEnum*)res;
}
