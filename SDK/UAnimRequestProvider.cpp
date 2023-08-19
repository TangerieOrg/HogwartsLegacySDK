#include "UAnimRequestProvider.hpp"
#include "UInterface.hpp"
UAnimRequestProvider* UAnimRequestProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimRequestProvider");
    return (UAnimRequestProvider*)res;
}
