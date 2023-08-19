#include "UBTService.hpp"
#include "UBTService_ScopedTag.hpp"
UBTService_ScopedTag* UBTService_ScopedTag::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTService_ScopedTag");
    return (UBTService_ScopedTag*)res;
}
