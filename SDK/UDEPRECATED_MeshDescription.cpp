#include "UDEPRECATED_MeshDescription.hpp"
#include "UObject.hpp"
UDEPRECATED_MeshDescription* UDEPRECATED_MeshDescription::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshDescription.MeshDescription");
    return (UDEPRECATED_MeshDescription*)res;
}
