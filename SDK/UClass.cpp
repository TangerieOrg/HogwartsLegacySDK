#include "UClass.hpp"
#include "UObject.hpp"
#include "UStruct.hpp"
UClass* UClass::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.Class");
    return (UClass*)res;
}
