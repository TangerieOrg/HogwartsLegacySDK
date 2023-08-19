#include "UBaseProvider.hpp"
#include "UStringProvider.hpp"
UStringProvider* UStringProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.StringProvider");
    return (UStringProvider*)res;
}
