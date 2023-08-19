#include "UClass.hpp"
#include "UObject.hpp"
#include "UObjectProvider.hpp"
#include "UObject_Spawn.hpp"
UObject_Spawn* UObject_Spawn::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Object_Spawn");
    return (UObject_Spawn*)res;
}
