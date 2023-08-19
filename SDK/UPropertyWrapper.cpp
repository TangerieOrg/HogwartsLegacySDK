#include "UObject.hpp"
#include "UPropertyWrapper.hpp"
UPropertyWrapper* UPropertyWrapper::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.PropertyWrapper");
    return (UPropertyWrapper*)res;
}
