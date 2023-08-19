#include "UAnimShakeProvider.hpp"
#include "UFloatProvider.hpp"
UAnimShakeProvider* UAnimShakeProvider::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimShakeProvider");
    return (UAnimShakeProvider*)res;
}
