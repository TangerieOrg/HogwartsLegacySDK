#include "UMapResponse.hpp"
#include "UObject.hpp"
UMapResponse* UMapResponse::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapResponse");
    return (UMapResponse*)res;
}
