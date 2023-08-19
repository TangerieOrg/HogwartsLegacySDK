#include "UObjectProvider.hpp"
#include "UObject_IsCaller.hpp"
UObject_IsCaller* UObject_IsCaller::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Object_IsCaller");
    return (UObject_IsCaller*)res;
}
