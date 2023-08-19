#include "UBaseProvider.hpp"
#include "UObject.hpp"
UBaseProvider* UBaseProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.BaseProvider");
    return (UBaseProvider*)res;
}
