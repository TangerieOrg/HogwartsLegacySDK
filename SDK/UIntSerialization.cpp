#include "UIntSerialization.hpp"
#include "UObject.hpp"
UIntSerialization* UIntSerialization::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.IntSerialization");
    return (UIntSerialization*)res;
}
