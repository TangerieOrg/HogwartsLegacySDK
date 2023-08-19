#include "FDBLocationReference.hpp"
#include "UStringProvider.hpp"
#include "UTransformProvider.hpp"
#include "UTransform_DBLocation.hpp"
UTransform_DBLocation* UTransform_DBLocation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Transform_DBLocation");
    return (UTransform_DBLocation*)res;
}
