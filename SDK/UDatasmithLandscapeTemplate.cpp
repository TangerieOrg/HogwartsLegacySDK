#include "UDatasmithLandscapeTemplate.hpp"
#include "UDatasmithObjectTemplate.hpp"
#include "UMaterialInterface.hpp"
UDatasmithLandscapeTemplate* UDatasmithLandscapeTemplate::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithLandscapeTemplate");
    return (UDatasmithLandscapeTemplate*)res;
}
