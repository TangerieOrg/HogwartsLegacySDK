#include "UObjectProvider.hpp"
#include "UObject_Direct.hpp"
UObject_Direct* UObject_Direct::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Object_Direct");
    return (UObject_Direct*)res;
}
