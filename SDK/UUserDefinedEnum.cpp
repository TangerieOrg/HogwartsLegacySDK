#include "UEnum.hpp"
#include "UUserDefinedEnum.hpp"
UUserDefinedEnum* UUserDefinedEnum::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.UserDefinedEnum");
    return (UUserDefinedEnum*)res;
}
